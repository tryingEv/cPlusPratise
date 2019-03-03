//
//  ADT_Queue.h
//  TestConsul
//
//  Created by wuyongjun on 6/18/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//  队列测试

#ifndef __TestConsul__ADT_Queue__
#define __TestConsul__ADT_Queue__
#define MAX_SIZE 20

#include <stdio.h>
namespace ADT_TEST
{
    typedef int ElemType;
    class Queue_Loop
    {
    public:
        
        Queue_Loop();
        
        ~ Queue_Loop();
        
        void InitQueue();
        
        bool isEmpty();
        
        void enQueue(ElemType&);
        
        ElemType deQueue();
        
        ElemType getHead();
    
    private:
        int _font, _rear;
        ElemType _data [MAX_SIZE];
        
    };
    
    class Queue_Test
    {
    public:
        void test();
    };
};

#endif /* defined(__TestConsul__ADT_Queue__) */
