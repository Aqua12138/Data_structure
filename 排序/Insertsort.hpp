//
// Created by zhx on 2022/3/9.
//

#ifndef DATA_STRUCTURE_INSERTSORT_HPP
#define DATA_STRUCTURE_INSERTSORT_HPP

#endif //DATA_STRUCTURE_INSERTSORT_HPP
#include <iostream>
#include <vector>
using namespace std;

class Insertsort{
public:
//    插入排序
//    1、把所有的元素分为两组，已排序的和未排序的
//    2、找到未排序组中的第一个元素，向已经排序的组中进行插入
//    3、倒叙遍历已经排序的元素，依次和待插入元素进行比较，直到找到一个元素小于等于待插入元素，那么就把待插入元素插到这个元素之后
    vector<int> sort(vector<int> nums){
//    外循环，从第二个元素开始遍历（默认第一个元素已经排序好），遍历到最后一个元素结束
        for (int i = 1; i < nums.size(); i++){
//          内循环，从排好序的最后一个元素开始倒序遍历，遍历终点为第一个元素，期间如果出现待插入元素大于已经排序好的元素，遍历停止
            for (int j = i - 1; j >= 0; j--){
                //比较待插入元素nums[i] 和 排序好的元素的大小，如果待插入元素大或者等于，遍历终止，否则交换两个元素的值
                if (nums[i] < nums[j]){
                    exchange(nums[i], nums[j]);
                    //交换大小后，索引也应该往前改变一位，不然i对应的元素不再是待插入元素，而是交换后的较大元素
                    i--;
                }
                else continue;
            }
        }
        return nums;
    }

    //交换
    void exchange(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
};