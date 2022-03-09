//
// Created by zhx on 2022/3/9.
//

#ifndef DATA_STRUCTURE_XIERSORT_HPP
#define DATA_STRUCTURE_XIERSORT_HPP

#endif //DATA_STRUCTURE_XIERSORT_HPP
#include <iostream>
#include <vector>
using namespace std;

class Xiersort{
public:
//    希尔排序 按照右小到大顺序排列
//    1、设定增长量h，按照增长量h作为数据分组的依据，对数据进行分组
//    2、对分好组的每一组数据完成插入排序；
//    3、减少增长量，最少减少到1，重复第二步操作
    vector<int> sort(vector<int> nums){
        //确定初始增长量的大小
        int N = nums.size();
        int h = 1;
        while(h < N/2) h = h*2 + 1;

        //外循环遍历h到1的过程 for 或者 while都可以
        for (; h >= 1; h = h/2){
            //内循环开始进行插入排序
            //插入排序外循环，从第一个待插入数据开始遍历
            for (int i = h; i < N; i++){
                //插入排序内循环，已排序好的序列倒序排序
                for (int j = i - h; j >= 0; j -= h){
                    //比较待插入元素nums[i] 和 nums[j]的大小，如果nums[i]小，则交换，否则直接结束当前内循环
                    if (nums[i] < nums[j]){
                        //交换
                        exchange(nums[i], nums[j]);
                        //交换后同时更改待插入元素索引位置
                        i -= h;
                    }
                }
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