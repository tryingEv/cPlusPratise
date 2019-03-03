//
//  ADT_Table_Ordered.cpp
//  TestConsul
//
//  Created by wuyongjun on 6/11/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//  ADT顺序表测试

#include "ADT_Table_Ordered.h"
#include <iostream>
//namespace ADT_TEST
//{
//    int Table_order::getLenght()
//    {
//        return length;
//    }
//    //template <class T>
//}
using namespace ADT_TEST;
template <class T>
int Table_order< T >::getLenght()
{
    return length;
}

template <class T>
int Table_order<T>::locateElem(T &t)
{
    for (int i = 0; i < length; ++i)
    {
        if (t == table_ptr[i])
        {
            return i + 1;
        }
    }
    return -1;
}

template <class T>
T Table_order<T>::getElem(int index)
{
    if (index > TABTL_MAXSIZE || index < 1) {
        return NULL;
    }
    
    return table_ptr[index -1];
}

template <class T>
bool Table_order<T>::insert(T &t, int index)
{
    if (TABTL_MAXSIZE < index || index < 1) {
        return false;
    }
    
    for (int i = length; i >= index; -- i)
    {
        table_ptr[i] = table_ptr[i - 1];
    }
    table_ptr[index - 1] = t;
    length ++;
    return true;
}

template <class T>
bool Table_order<T>::remove(int index)
{
    if (TABTL_MAXSIZE < index || index < 1)
    {
        return false;
    }
    for (int i = index; i < length; ++i) {
        table_ptr[index -1] = table_ptr[index];
    }
    
    length -- ;
    return true;
}

template <class T>
void Table_order<T>::destory()
{
    delete [] table_ptr;
}

template <class T>
void Table_order<T>::elemPrint()
{
    for (int i = 0; i < length; ++i) {
        std::cout<< i <<"  ,  "<< table_ptr[i]<<std::endl;
    }
    
}

template <class T>
T Table_order<T>::removeMinElem()
{
    if (length <=0 ) {
        std::cout<<"no elem in table"<<std::endl;
        return NULL;
    }
    T minElem = table_ptr[0];
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if (table_ptr[i] < minElem) {
            minElem = table_ptr[i];
            index = i;
        }
    }
    table_ptr[index] = table_ptr[length - 1];
    table_ptr[length-1] = NULL;
    length --;
    return minElem;
}

template <class T>
void Table_order<T>::reverse()
{
    for (int i = 0; i < length/2; ++i) {
        T t = table_ptr[i];
        table_ptr[i] = table_ptr[length - 1 - i];
        table_ptr[length - 1 - i] = t;
    }
}

template <class T>
void Table_order<T>::removeElem(T &t)
{
    int length_new = 0;
    for (int i = 0; i < length; ++i) {
        if (table_ptr[i] != t) {
            table_ptr[length_new] = table_ptr[i];
            length_new ++;
        }
    }
    length = length_new;
}

template <class T>
void Table_order<T>::removeElem(T &start, T &end)
{
    if (start >= end || length < 1) {
        return;
    }
    int index = 0;
    for (int i = 0; i < length; ++i) {
        if (table_ptr[i] < start || table_ptr[i] > end) {
            table_ptr[index] = table_ptr[i];
            index ++;
        }
    }
    length = index;
}

void Table_order_test::test()
{
    
    int at[8] = { 3,10,7,5,113,0,8,3};
    int length = 8;
    Table_order<int> test_table(length);
    for (int i = 0; i < length; ++i) {
        test_table.insert(at[i], i+1);
    }
    test_table.elemPrint();
//    std::cout << "-------------seacch 5-------------------"<< std::endl;
//    std::cout << test_table.locateElem(at[5])<<std::endl;
//    
//    std::cout << "-------------insert 0 1119-------------------"<< std::endl;
//    int b = 1119;
//    test_table.insert(b, 9);
//    test_table.elemPrint();
//    std::cout << "-------------remove 1-------------------"<< std::endl;
//    test_table.remove(1);
//    test_table.elemPrint();
//    
//    std::cout << "-------------remove min-------------------"<<test_table.getLenght()<< std::endl;
//    test_table.removeMinElem();
//    test_table.elemPrint();
//    std::cout << "-------------remove min-------------------"<< std::endl;
//    test_table.removeMinElem();
//    test_table.elemPrint();
//    
//    std::cout << "-------------remove reverse-------------------"<< std::endl;
//    test_table.reverse();
//    test_table.elemPrint();
//
//    
//    std::cout << "-------------remove reverse-------------------"<< std::endl;
//    int va = 9;
//    test_table.removeElem(va);
//    test_table.elemPrint();
    
    
    std::cout << "-------------remove reverse-------------------"<< std::endl;
    int start = 3 ,end = 8;
    test_table.removeElem(start, end);
    test_table.elemPrint();

    
}






