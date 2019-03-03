//
//  ADT_Table_Ordered.h
//  TestConsul
//
//  Created by wuyongjun on 6/11/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//

#ifndef __TestConsul__ADT_Table_Ordered__
#define __TestConsul__ADT_Table_Ordered__
#define TABTL_MAXSIZE 20
#include <stdio.h>
namespace  ADT_TEST
{
    template <class T>
    class Table_order
    {
    public:
        Table_order (int length):table_ptr(NULL),length(0)
        {
            table_ptr = new T [length];
        }
        
        ~ Table_order ()
        {
            delete [] table_ptr;
        }
        
        int getLenght();
        
        int locateElem( T &t);
        
        T getElem(int i);
        
        bool insert(T &t, int index);
        
        bool remove(int i);
        
        void destory();
        
        void elemPrint();
        
        void reverse();
        
        void removeElem(T &t);
        
        //remove value between start and end elem
        void removeElem(T &start, T &end);
        
        
        
        //remove elem that value is minest in table
        T removeMinElem();
        
        
    private:
        T *table_ptr;
        int length;
    };
    
    class Table_order_test
    {
    public:
        void test();
        
    };
}
#endif /* defined(__TestConsul__ADT_Table_Ordered__) */
