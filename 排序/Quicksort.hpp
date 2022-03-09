//
// Created by zhx on 2022/3/9.
//

#ifndef DATA_STRUCTURE_QUICKSORT_HPP
#define DATA_STRUCTURE_QUICKSORT_HPP

#endif //DATA_STRUCTURE_QUICKSORT_HPP
#include <iostream>
#include <vector>
using namespace std;

//快速排序
//1、首先设定一个分界值，通过该值将数组分为左右两个部分
//2、将大于或者等于分界值的数据放到数据的右边，小于分界值的放到数据的左边，此时左边数据各元素小于或者等于分界值，而右边部分各元素都大于或者等于分解值
//3、然后，左右两边数据就可以继续独自重复1、2步骤

class Quicksort{
public:

    Quicksort(vector<int> nums){
        this->nums = nums;
    }

    //首先实现 返回分界值索引
    int partition(int l, int r){
        //选取第一个元素为分界元素，将元素按照大小分在第一个元素的两侧
        int sentinel = nums[l];
        //从左边第二个和右边第
        // 一个开始往中间遍历，左指针发现比哨兵元素大的话停止遍历，右指针发现比哨兵元素小停止遍历\
        //定义左右指针
        int i = l;
        int j = r;
        while (i < j){
            //从右到左开始遍历
            while (nums[i] < sentinel && i < j) i++;
            while (nums[j] > sentinel && i < j) j--;

            //特殊交换
            swap(nums[j], nums[l]);
        }

        //返回索引位置
        return i;
    }

    //定义排序主体函数，递归调用分界函数
    void sort(int l, int r){
        if (l >= r) return;

        //获得分界点，同时分大小
        int part = partition(l, r);

        //开始递归
        sort(l, part - 1);
        sort(part + 1, r);

    }

    void swap(int &a, int &b){
        //这个交换要判断两个值的大小，如果b的值更大，则交换，否则不交换
        if (b > a){
            int temp = a;
            a = b;
            b = temp;
        }
    }
    vector<int> nums;
};
