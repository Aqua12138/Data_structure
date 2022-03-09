#include <iostream>
#include "Stack/stack.hpp"
#include "Stack/括号匹配问题/BracketsMatch.h"
#include "Stack/逆波兰表达式/ReversePolishNotationTest.h"
#include "队列/queue.hpp"
#include "排序/Bubblesort.hpp"
#include "排序/Choosesort.hpp"
#include "排序/Insertsort.hpp"
//#include "单链表/Linklist.txt"
#include<cstdlib>
using namespace std;
void show(stack<int> &s){
    for (int i = 0; i < s.size(); i++)
    {
        cout << s.get(i + 1) << endl;
    }
}

void bubblesort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    //排序
    //冒泡排序
    Bubblesort bubble_sort;
    vector<int> result = bubble_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}

void choosesort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    //排序
    //选择排序
    Choosesort choose_sort;
    vector<int> result = choose_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}

void insertsort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    //排序
    //选择排序
    Choosesort insert_sort;
    vector<int> result = insert_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}
int main(){


    //排序
    //1、冒泡排序
//    bubblesort();

    //2、选择排序
//    choosesort();

    //3、插入排序
    insertsort();
//    stack<int> s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    s.push(3);
//    int a = s.pop();
////    show(s);
//    cout << s.get(2) << endl;
//    cout << s.size() << endl;
//    return 0;

//    string s = "(34))";
//    BracketsMatch B;
//    int a = B.isMatch(s);
//    cout << a << endl;

//    ReversePolishNotationTest r;
//    cout<< r.caculate("359+-");
//    queue<int> q;
//    q.enqueue(2);
//    int a = q.dequeue();
//    cout << q.size() << endl;
//    cout << a << endl;

}
