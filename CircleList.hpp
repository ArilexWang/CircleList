//
//  CircleList.hpp
//  CircleList
//
//  Created by Ricardo on 2016/10/8.
//  Copyright © 2016年 Ricardo. All rights reserved.
//

#ifndef CircleList_hpp
#define CircleList_hpp

#include <stdio.h>
#include "CircleListNode.hpp"
class CircleList{
private:
    CircleListNode* first;
    CircleListNode* last;
    int length;
public:
    CircleList() {first = new CircleListNode();}
    ~CircleList();
    void origin(int total);
    bool IsEmpty(){return first->next == first? true:false;}
    CircleList* getHead();
    void setHead(CircleListNode* p);
    int Length();
    CircleListNode* Search(int number);
    CircleListNode* Located(int i);
    bool Remove(int i,int& x);
    void destroy();
};

#endif /* CircleList_hpp */
