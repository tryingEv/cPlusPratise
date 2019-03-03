//
//  ADT_Stack.h
//  TestConsul
//
//  Created by wuyongjun on 6/17/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//  栈测试，顺序栈，链栈

#ifndef __TestConsul__ADT_Stack__
#define __TestConsul__ADT_Stack__
#define MAX_SIZE 10

#include <stdio.h>
#include <iostream>
using namespace std;
namespace ADT_TEST
{

template <class T>
    class Stack
    {
    public:
        Stack ()
        {
            initStack();
        }
        
        ~ Stack()
        {
            
        }
        
        void initStack();
        
        bool IsStackEmpty();
        
        bool push(T&);
        
        T pop();
        
        T getTop();
        
        void clearStack();
        
    private:
        int _top;
        T _data[MAX_SIZE];
    };
    
    template <class T>
    class Stack_Link_Elem
    {
    public:
        Stack_Link_Elem():_next(nullptr)
        {
            
        }
        Stack_Link_Elem(T data, Stack_Link_Elem *next = nullptr)
        {
            _data = data;
            _next = next;
        }
        T _data;
        Stack_Link_Elem *_next;
    private:
        
    };
    
    template <class T>
    class Stack_Link
    {
    public:
        Stack_Link ()
        {
            initStack();
        }
        
        ~ Stack_Link()
        {
            
        }
        
        void initStack();
        
        bool IsStackEmpty();
        
        bool push(Stack_Link_Elem<T>&);
        
        Stack_Link_Elem<T> pop();
        
        Stack_Link_Elem<T> getTop();
        
        void clearStack();
        
    private:
        Stack_Link_Elem<T> *_top;
    };
    
    
    
    
    class Stack_Test
    {
    public:
        void test();
    };
}



#endif /* defined(__TestConsul__ADT_Stack__) */
