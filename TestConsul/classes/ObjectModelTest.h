//
//  ObjectModelTest.h
//  TestConsul
//
//  Created by wuyongjun on 5/23/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//

#ifndef __TestConsul__ObjectModelTest__
#define __TestConsul__ObjectModelTest__

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Base {
    
public:
    Base(int );
    ~Base();
    int _base;
    string _name;
    static int _count;
    static int getCount();
    static string getName();
    virtual void print();
    virtual void obj_system();
    
private:

   
    
};
#endif /* defined(__TestConsul__ObjectModelTest__) */
