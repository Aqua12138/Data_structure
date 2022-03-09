//
// Created by zhx on 2022/3/9.
//

#ifndef DATA_STRUCTURE_MERGESORT_HPP
#define DATA_STRUCTURE_MERGESORT_HPP

#endif //DATA_STRUCTURE_MERGESORT_HPP
#include <iostream>
#include <vector>
using namespace std;

class Mergesort{
public:
    Mergesort(vector<int> nums){
        this->nums = nums;
        assist = new int [nums.size()];
    }
    void sort(int l, int r){
        //归并终点 当数组的l索引 >= r索引时
        if (l >= r) return;

        //计算l r的分割点
        int m = (l + r) / 2;

        //分
        sort(l, m);
        sort(m+1, r);

        //治
        //定义双指针用与遍历两段nums序列
        int i = l;
        int j = m + 1;

        //定义一个辅助数组指针，用来存储排序好的数组段
        int k = l;

        //双指针开始遍历，将较小值存储在assist中
        while (i <= m && j <= r){
            if (nums[i] < nums[j]){
                assist[k++] = nums[i++];
            }
            else{
                assist[k++] = nums[j++];
            }
        }

        //将剩余没有排列好的数据
        while (i <= m){
            assist[k++] = nums[i++];
        }

        while (j <= r){
            assist[k++] = nums[j++];
        }

        //将排好序的数组赋值给nums
        for (int index = l; index <= r; index++){
            nums[index] = assist[index];
        }
    }


    vector<int> nums;

    ~Mergesort(){
        if (assist != NULL){
            delete[] assist;
        }
        assist = NULL;
    }
private:
    // 定义一个未知大小的辅助数组用来存储排序好的数组段
    int *assist;

};