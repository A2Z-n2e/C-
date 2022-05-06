//
// Created by Administrator on 2022/5/5.
//2.2 基本输入输出
#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "输入一个整数：";
    /*Scanner sc = new Scanner(System.in);
     *int number = sc.nextInt();*/
    cin >> number;    //输入
    cout << "输入的数字为：" << number;
    return 0;
}
