/**
 * @file ListNodes.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-06
 * 
 * @copyright Copyright (c) 2021
 * 
 * This file is to define a linked node struct. And some implementations is 
 * done to the linked list
 */
#include <iostream>
#include <string>
#include <new>
#include <vector>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
ListNode* InitializeListNode(ListNode* L,vector<int>& a);
void printListNode(ListNode* L);
int main(){
    ListNode* L1 = new ListNode; // 使用new定义struct结构体
    vector<int> a={0,1,2,3,4};
    L1 = InitializeListNode(L1,a);
    printListNode(L1);
    return 0;

}
ListNode* InitializeListNode(ListNode* L,vector<int>& a){
    ListNode* cur;
    cur = L;
    int i=0;
    while(i<=a.size()){
        ListNode* newnode = new ListNode; // 初始化链表时，要新建一个临时链表用于存储数值和空next
        newnode->val = a[i];
        newnode->next = nullptr;
        if(i==0){
            L=newnode;
            cur = L;
        }else{
            cur->next = newnode;
            cur = cur->next;
        }
        i++;
    }
    return L;
}
void printListNode(ListNode* L){
    while(L->next){
        cout<<L->val<<' ';
        L=L->next;
    }
    cout<<endl;
    return;
}
