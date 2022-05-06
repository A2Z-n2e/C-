//
// Created by Administrator on 2022/5/5.
//3.1 手动输入两数并返回两数之和
#include <iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    cout << "请输入两个整数，并以Enter隔开：";
    cin >> num1 >> num2;
    sum=num1+num2;
    cout << num1 << " + " << num2 << " = " << sum;
    return 0;    //别忘了！！！！！！
}

