//
// Created by Administrator on 2022/5/6.
//3.2EXTR 枚举类型enum，由用户定义的若干枚举常量的集合
#include <iostream>;
using namespace std;
int main(){
    enum songs {Devil = 5,Trigger = 4} a,b;
    a = Devil;
    b = Trigger;
    cout << a << b;
    return 0;
}
