//
//  CircleListNode.hpp
//  CircleList
//
//  Created by Ricardo on 2016/10/8.
//  Copyright © 2016年 Ricardo. All rights reserved.
//

#ifndef CircleListNode_hpp
#define CircleListNode_hpp

#include <stdio.h>
#include <iostream>
class CircleList;
class CircleListNode{
    friend CircleList;
    friend void Josephus(CircleList& Js,int n,int s,int m,int k);
    
    CircleListNode();
    CircleListNode(int number):number(number){}
    //~CircleListNode();
    
    int number;
    CircleListNode* next;
};

#endif /* CircleListNode_hpp */
