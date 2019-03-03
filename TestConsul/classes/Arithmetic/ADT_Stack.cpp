//
//  ADT_Stack.cpp
//  TestConsul
//
//  Created by wuyongjun on 6/17/15.
//  Copyright (c) 2015 吴勇均. All rights reserved.
//

#include "ADT_Stack.h"


namespace ADT_TEST {
    template <class T>
    void Stack<T>::initStack()
    {
        _top = -1;
    }
    
    template <class T>
    bool Stack<T>::IsStackEmpty()
    {
        if (-1 == _top) {
            return true;
        }
        return false;
    }
    
    template <class T>
    bool Stack<T>::push(T &elem)
    {
        if (_top >= MAX_SIZE - 1) {
            return false;
        }
        _data[++_top ] = elem;
        return true;
    }
    
    template <class T>
    T Stack<T>::pop()
    {
        T result = _top < 0 ? NULL : _data[_top];
        _data[_top --] = NULL;
        return result;
    }
    
    template <class T>
    T Stack<T>::getTop()
    {
        if (_top > -1)
        {
            return _data[_top];
        }
        return NULL;
    }
    
    template <class T>
    void Stack<T>::clearStack()
    {
//        cout << _top << " ---------- " <<endl;
        while (_top >= 0) {
//            cout << _top << "   ,   " <<_data[_top]<<endl;
            _data[_top --] = NULL;
        }
   }
    
    template <class T>
    void Stack_Link<T>::initStack()
    {
        _top = nullptr;
    }
    
    template <class T>
    bool Stack_Link<T>::IsStackEmpty()
    {
        if (nullptr == _top) {
            return true;
        }
        return false;
    }
    
    template <class T>
    bool Stack_Link<T>::push(Stack_Link_Elem<T> &elem)
    {
        Stack_Link_Elem<T> ac;
        
        if (nullptr != _top)
        {
            elem._next = _top;
        }
        _top = &elem;
        return true;
    }
    
    template <class T>
    Stack_Link_Elem<T> Stack_Link<T>::pop()
    {
        Stack_Link_Elem<T> result = _top == NULL ? NULL : *_top;
        _top = _top->_next;
        return result;
    }
    
    template <class T>
    Stack_Link_Elem<T> Stack_Link<T>::getTop()
    {
        if (_top != nullptr)
        {
            return *_top;
        }
        return NULL;
    }
    
    template <class T>
    void Stack_Link<T>::clearStack()
    {
        //        cout << _top << " ---------- " <<endl;
        while (_top != nullptr) {
            //            cout << _top << "   ,   " <<_data[_top]<<endl;
            _top = nullptr;
        }
    }
    
    void Stack_Test::test()
    {
        int age [5] = {3,5,8,9,12};
        Stack_Link_Elem<int> elems [5];
        Stack_Link <int>st;
        for (int i = 0; i < 5; ++i) {
            Stack_Link_Elem<int> t (age[i],nullptr);
            elems[i] = t;
            st.push(elems[i]);
        }
        for (int i = 0; i < 5; i++) {
            cout << st.pop()._data << "   ,   " << st.getTop()._data << endl;
        }
        
    }
}
