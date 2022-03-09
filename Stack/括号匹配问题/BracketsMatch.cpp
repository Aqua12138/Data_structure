//
// Created by zhx on 2021/12/13.
//

#include "BracketsMatch.h"

bool BracketsMatch::isMatch(string str) {
    //1.创建栈对象，迎来存储（
    stack<char> *s = new stack<char>();
    //2.从左往右遍历字符串
    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        //3.判断当前字符是否是左括号
        if (c == '('){
            s->push(c);
        }
        //4.如果是右括号你就弹出一个左括号
        else if (c == ')'){
            char n = s->pop();
            if (n == NULL){
                return false;
            }
        }
    }

    //5.判断栈中还有没有剩余的左括号 如果有剩余的左括号 则证明不匹配
    if (s->size() == 0){
        return true;
    }
    else return false;
}