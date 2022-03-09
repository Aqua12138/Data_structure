//
// Created by zhx on 2022/2/16.
//
#include <iostream>
using namespace std;

template <class T>
class queue{
public:
    queue(){
        this->head = new Node(NULL, nullptr);
        this->last = nullptr;
        this->N = 0;
    }

    //判断队列是否为空
    bool isEmpty(){
        return N==0;
    }

    //返回队列中元素的个数
    int size(){
        return N;
    }

    //向队列中插入元素t
    void enqueue(T t){
        //1、当前尾节点为空 不空
        if (last == NULL){
            last = new Node(t, NULL);
            head->next = last;
        }
        else{
            Node *oldlast = last;
            last = new Node(t, NULL);
            oldlast->next = last;
        }

        //元素个数加1
        N++;
    }

    //从队列中拿出元素
    T dequeue(){
        if (isEmpty()){
            return NULL;
        }
        else{
            Node *oldFist = head->next;
            head->next = oldFist->next;
            N--;
            return oldFist->val;
        }
    }

private:
    //定义节点结构体，每一个节点有两个属性
    //1、自身的值
    //2、下一个节点指针
    struct Node{
        T val;
        Node *next;
        Node(): val(0), next(nullptr){}
        Node(T x): val(x), next(nullptr){}
        Node(T x, Node *next): val(x), next(next){}
    };
    //记录第一个节点
    Node *head;
    //记录第二个节点
    Node *last;
    //记录队列中元素的个数
    int N;


};
