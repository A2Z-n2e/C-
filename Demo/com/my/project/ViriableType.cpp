//
// Created by Administrator on 2022/5/6.
//3.2.2 ��������&�������� ----��ֵlvalue����ֵrvalue���������ݽṹ����˵----
#include <iostream>
using namespace std;
//ȫ�ֱ�������
extern int a,b,c;
extern float f;
int func();    //��������
int main(){
    int a = 5,b = 6;    //ȫ�ֱ������岢��ֵ
    int c = a+b;    //ȫ�ֱ�������
    float f = 6.0/2.5;    //ȫ�ֱ������岢��ֵ
    int i = func();    //��������
    int d = 2;    //�ֲ��������岢��ֵ
    cout << c<< endl << f <<endl << d;
    return 0;
}
int func(){    //��������
    cout << "nothing" << endl;
    return 0;
}
