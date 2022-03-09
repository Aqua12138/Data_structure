#include <iostream>
#include "Stack/stack.hpp"
#include "Stack/括号匹配问题/BracketsMatch.h"
#include "Stack/逆波兰表达式/ReversePolishNotationTest.h"
#include "队列/queue.hpp"
#include "排序/Bubblesort.hpp"
#include "排序/Choosesort.hpp"
#include "排序/Insertsort.hpp"
#include "排序/Xiersort.hpp"
#include "排序/Mergesort.hpp"
#include "排序/Quicksort.hpp"
//#include "单链表/Linklist.txt"
#include<cstdlib>
using namespace std;
void show(stack<int> &s){
    for (int i = 0; i < s.size(); i++)
    {
        cout << s.get(i + 1) << endl;
    }
}

//冒泡排序
void bubblesort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    Bubblesort bubble_sort;
    vector<int> result = bubble_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}

//选择排序
void choosesort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    Choosesort choose_sort;
    vector<int> result = choose_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}

//插入排序
void insertsort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    Insertsort insert_sort;
    vector<int> result = insert_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}

//希尔排序
void xiersort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    Xiersort xier_sort;
    vector<int> result = xier_sort.sort(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}

//归并排序
void mergesort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    Mergesort merge_sort(nums);
    merge_sort.sort(0, nums.size() - 1);
    for (int i = 0; i < nums.size(); i++){
        cout << merge_sort.nums[i] << endl;
    }
}

//快速排序
void quicksort(){
    vector<int> nums = {7, 6, 5, 4, 3, 2, 1};
    Quicksort quick_sort(nums);
    quick_sort.sort(0, nums.size() - 1);
    for (int i = 0; i < nums.size(); i++){
        cout << quick_sort.nums[i] << endl;
    }
}
int main(){


    //排序
    //1、冒泡排序
//    bubblesort();

    //2、选择排序
//    choosesort();

    //3、插入排序
//    insertsort();

    //4、希尔排序（改进插入排序）
//    xiersort();

    //5、归并排序
//    mergesort();

    //6、快速排序
    quicksort();
//    stack<int> s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    s.push(3);
//    int a = s.pop();
//    show(s);
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
