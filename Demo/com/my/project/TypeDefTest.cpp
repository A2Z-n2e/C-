//
// Created by Administrator on 2022/5/6.
//3.2EXTR typedefΪ��������ȡ�����֣��л��ῴ��ʵ�����е��£�
#include<iostream>
using namespace std;
typedef int (*A)(char,char);
int fun0(char a,char b);
int fun1(char b,char a);
int main()
{
    A a;
    A b;
    a = fun0;
    a('a','b');
    b = fun1;
    b('b','a');
    return 0;
}
int fun0(char a,char b)
{
    cout<<"fun0"<<endl;
    return 0;
}
int fun1(char b,char a)
{
    cout<<"fun1"<<endl;
    return 0;
}