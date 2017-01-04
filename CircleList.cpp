//
//  CircleList.cpp
//  CircleList
//
//  Created by Ricardo on 2016/10/8.
//  Copyright © 2016年 Ricardo. All rights reserved.
//

#include "CircleList.hpp"

void CircleList::origin(int total){
    CircleListNode* newNode;
    last = first;
    length = total;
    int count = 1;
    while (count <= total) {
        if(count == 1){
            newNode = new CircleListNode(count);
            first = newNode;
            last = first;
            count++;
        }
        else{
            newNode = new CircleListNode(count);
            if(newNode == NULL){
                std::cerr << "存储分配错误！" << std::endl;
                exit(1);
            }
            last->next = newNode;
            last = newNode;
            count++;
        }
    }
    last->next = first;
}

int CircleList::Length(){
    CircleListNode* head,*current;
    head = first;
    current = head->next;
    int len = 1;
    while (current != first) {
        current = current->next;
        len++;
    }
    length = len;
    return length;
}

CircleListNode* CircleList::Located(int index){
    if(index <= 0 || index > Length()) return NULL;
    CircleListNode* current = first;
    int k = 1;
    while (current != NULL && k < index) {
        current = current->next;
        k++;
    }
    return current;
}

void CircleList::destroy(){
    CircleListNode* head = first;
    CircleListNode* current = head;
    while (this->Length()!=1) {
        current = head->next;
        head->next = current->next;
        delete current;
    }
    delete head;
    length = 0;
}

void CircleList::setHead(CircleListNode *p){
    first = p;
}

CircleListNode* CircleList::getHead()const {
    return first;
}

CircleList::~CircleList(){
    destroy();
}

