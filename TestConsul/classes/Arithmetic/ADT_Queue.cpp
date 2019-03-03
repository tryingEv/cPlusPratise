//
//  ADT_Queue.cpp
//  TestConsul
//
//  Created by wuyongjun on 6/18/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//

#include "ADT_Queue.h"
namespace ADT_TEST
{
    Queue_Loop::Queue_Loop()
    {
        InitQueue();
    }
    
    Queue_Loop::~Queue_Loop()
    {
        
    }
    
    void Queue_Loop::InitQueue()
    {
        _font = _rear = 0;
    }
    
    bool Queue_Loop::isEmpty()
    {
        if (_font == _rear) {
            return true;
        }
        return false;
    }
    
    void Queue_Loop::enQueue(ElemType &et)
    {
        if ((_rear + 1)%MAX_SIZE == _font) {
            printf("%s\n","the queue is full!");
            return;
        }
        _data[_rear] = et;
        _rear = (_rear + 1)%MAX_SIZE;
        
    }
    
    ElemType Queue_Loop::deQueue()
    {
        if (_rear == _font) {
            printf("%s\n","the queue is empty");
            return NULL;
        }
        ElemType et = _data[_font];
        _font = (_font + 1)%MAX_SIZE;
        return et;
    }
    
    ElemType Queue_Loop::getHead()
    {
        if (_rear == _font) {
            printf("%s\n","the queue is empty");
            return NULL;
        }
        return _data[_font];
    }
    
    
    
    
    void Queue_Test::test()
    {
        int age [6] ={3,7,8,10,2,};
    }
    
    
}
