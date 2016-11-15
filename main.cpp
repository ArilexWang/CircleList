//
//  main.cpp
//  CircleList
//
//  Created by Ricardo on 2016/10/8.
//  Copyright © 2016年 Ricardo. All rights reserved.
//

#include <iostream>
#include "CircleList.hpp"
using namespace std;

void Josephus(CircleList& Js,int n,int s,int m,int k){
    CircleListNode* current = Js.Located(s);
    CircleListNode* pre = NULL;
    for(int i = 0;i < n-k;i++){
        for(int j = 1;j < m;j++){
            pre = current;
            current = current->next;
        }
        cout << "第" << i+1 << "个死者的位置是：" << current->number << endl;
        pre->next = current->next;
        delete current;
        current = pre->next;
    }
    cout << "最后剩下：" << Js.Length() << "人" << endl;
    cout << "剩于的生者位置为：";
    current = Js.Located(1);
    for (int i = 0; i < Js.Length(); i++) {
        cout << current->number << "  ";
        current = current->next;
    }
}

int main(int argc, const char * argv[]) {
    int n,s,m,k;
    cout << "现有N人围成一圈，从第S个人开始依次报数，报M的人出局，再由下一个人开始报数，如此循环，直到剩下K个人为止" << endl;
    cout << "请输入生死游戏的总人数N：" ;
    cin >> n;
    cout << "请输入游戏开始的位置S：";
    cin >> s;
    cout << "请输入死亡数字M：";
    cin >> m;
    cout << "请输入剩于的生者人数K：";
    cin >> k;
    if((n < s)||(n < m)||(n < k)){
        cerr << "输入非法数据" << endl;
        exit(1);
    }
    CircleList clist;
    clist.origin(n);
    Josephus(clist, n, s, m, k);
    return 0;
}
