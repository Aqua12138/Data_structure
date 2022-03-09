//
// Created by zhx on 2021/12/12.
//


#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<class T>
class stack{
public:
    class Node{
    public:
        //类方法
        //析构函数
        Node(T item, Node *next){
            this->item = item;
            this->next = next;
        }
        //类属性
        T item;
        Node *next;
    };
    stack(){

        this->head = new Node(NULL, NULL);
        this->N = 0;
    }

    //判断栈是否为空
    bool isEmpty(){
        return N == 0;
    }

    //获得大小
    int size(){
        return N;
    }

    //压栈
    void push(T t){
        //找到首节点指向的第一个节点
        Node *oldFirst = head->next;
        //创新新节点
        Node *newFirst = new Node(t, NULL);
        //让首节点指向新节点
        head->next = newFirst;
        //让新节点指向原来的第一个节点
        newFirst->next=oldFirst;

        //元素个数+1
        this->N++;
    }

    //获得item 遍历方法
    T get(int i)
    {
        Node* n = head;
        for (int j = 0; j < i; j++)
        {
            n = n->next;
        }
        return n->item;
    }

    //弹栈
    T pop(){
        //找到首节点指向的第一个节点
        Node *oldFirst = head->next;
        if(oldFirst==NULL){
            return NULL;
        }
        //让首节点指向第二个节点
        head->next = oldFirst->next;
        //元素个数-1
        N--;
        return oldFirst->item;
    }
    //show
private:
    //栈中元素个数
    int N;
    //记录首节点
    Node *head;

};



