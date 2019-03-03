//
//  ObjectModelTest.cpp
//  TestConsul
//
//  Created by wuyongjun on 5/23/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//

#include "ObjectModelTest.h"
#include <iostream>

Base::Base(int base):_base(0),_name("")
{
    _base = base;
}

Base::~Base()
{
    
}

//int Base::getIBase()
//{
//    return _base;
//}

int Base::getCount()
{
    return Base::_count;
}

string Base::getName()
{
    string name = "what";
    return name;
}

void Base::print()
{
    cout<< "I'm base No." << _count <<std::endl;
}

void Base::obj_system()
{
    cout << "static method obj_system" << endl;
}

int Base::_count = -1;




