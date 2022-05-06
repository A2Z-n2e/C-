//
// Created by Administrator on 2022/5/6.
//3.2.2 各种数据&变量类型 ----左值lvalue、右值rvalue，后期数据结构？再说----
#include <iostream>
using namespace std;
//全局变量声明
extern int a,b,c;
extern float f;
int func();    //函数声明
int main(){
    int a = 5,b = 6;    //全局变量定义并赋值
    int c = a+b;    //全局变量定义
    float f = 6.0/2.5;    //全局变量定义并赋值
    int i = func();    //函数调用
    int d = 2;    //局部变量定义并赋值
    cout << c<< endl << f <<endl << d;
    return 0;
}
int func(){    //函数定义
    cout << "nothing" << endl;
    return 0;
}
