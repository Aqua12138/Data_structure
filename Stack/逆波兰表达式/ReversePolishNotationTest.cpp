//
// Created by zhx on 2021/12/14.
//

#include "ReversePolishNotationTest.h"
#include<cstdlib>
#include <string>

int ReversePolishNotationTest::caculate(string notation) {
    //1.定义一个栈 用来存储操作数
    stack<int>* oprands = new stack<int>;
    //2.从左往右遍历波兰表达式 得到每一元素
    for (int i = 0; i < notation.length(); i++){
        char c = notation[i];
        //3.判断是操作数还是运算符

        int o1;
        int o2;
        int result;
        // 运算符
        switch (c) {
            case '+':
                o1 = oprands->pop();
                o2 = oprands->pop();
                result = o1 + o2;
                oprands->push(result);
                break;
            case '*':
                o1 = oprands->pop();
                o2 = oprands->pop();
                result = o1 * o2;
                oprands->push(result);
                break;
            case '-':
                o1 = oprands->pop();
                o2 = oprands->pop();
                result = o2 - o1;
                oprands->push(result);
                break;
            case '/':
                o1 = oprands->pop();
                o2 = oprands->pop();
                result = o2 / o1;
                oprands->push(result);
                break;
            default:
                //操作数
                oprands->push(int(c) - 48);
                break;
        }
    }
    //3.循环结束，这时oprands栈中应该只剩下一个值，这个值就是最后表达式的结果
    int result = oprands->pop();
    return result;
}