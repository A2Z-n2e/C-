//
// Created by Administrator on 2022/5/5.
//3.2.1 ��������&��������
#include <iostream>
//ʹ��string����ã�
#include <string>

using namespace std;
int main(){
    int a = 1;    //unsigned int �� signed int �� short int �� unsigned short int �� signed short int �� long int �� signed long int �� unsigned long int
    float b = 2.22;
    double c = 3.33;    //long double
    char d = 'ABCD';    //unsigned char �� signed char
    bool e = 'true';
    string f = "Let me test �ձ��Z.";
    size_t  g = 23;
    cout << "int:" << a << endl;
    cout << "float:" << b << endl;
    cout << "double:" << c << endl;
    cout << "char:" << d << endl;
    cout << "bool:" << e << endl;
    cout << "string:" << f << endl;
    cout << "size_t:" << g<< endl;

    return 0;
}

