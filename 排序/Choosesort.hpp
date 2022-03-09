//
// Created by zhx on 2022/3/9.
//

#ifndef DATA_STRUCTURE_CHOOSESORT_HPP
#define DATA_STRUCTURE_CHOOSESORT_HPP

#endif //DATA_STRUCTURE_CHOOSESORT_HPP
#include <iostream>
#include <vector>
using namespace std;

class Choosesort{
public:
    //选择排序
    //1、每一次遍历，假定第一个索引处的值为最小值，并与其他值进行比较
    //2、交换第一个索引和最小索引的值
    vector<int> sort(vector<int> nums){
        //外循环从头到尾遍历，遍历到倒数第二个值就可以停止
        for (int i = 0; i < nums.size() - 1; i++){
            //内循环从外循环头索引的下一个值开始遍历，遍历到最后一个值，并且与第一个值进行比较，如果第一个索引处的值更大，则交换
            for (int j = i + 1; j < nums.size(); j++){
                //比较第一个元素和当前索引元素，如果当前元素更小，交换
                if (nums[j] < nums[i]){
                    //交换
                    exchange(nums[j], nums[i]);
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