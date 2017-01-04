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
    
    void origin(int total);                    //生成环链
    bool IsEmpty(){return first->next == first? true:false;}
    
    CircleListNode* getHead() const;        //返回第一个节点
    void setHead(CircleListNode* p);        //设置第一个节点
    
    int Length();                           //返回链表长度
    CircleListNode* Located(int i);         //定位
    void destroy();                         //清空链表
};

#endif /* CircleList_hpp */
