//
// Created by zhx on 2022/3/9.
//

#ifndef DATA_STRUCTURE_BUBBLESORT_HPP
#define DATA_STRUCTURE_BUBBLESORT_HPP

#endif //DATA_STRUCTURE_BUBBLESORT_HPP
#include <iostream>
#include <vector>
using namespace std;


class Bubblesort{
public:
    //冒泡排序 实现数组由小到大排列 每一次大循环，都会把最小的元素给遍历到首
    vector<int> sort(vector<int> nums){
        //外循环循环size-1次
        for (int i = 1; i < nums.size(); i++){
            //内循环 从尾到首排序 每完整循环一次，循环终点位置+1
            for (int j = nums.size() - 1; j >= i; j--){
                //比较当前元素与它上一个元素的大小，如果当前元素更小，交换
                exchange(nums[j], nums[j - 1]);
            }
        }
        return nums;
    }

    //交换元素
    void exchange(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
};