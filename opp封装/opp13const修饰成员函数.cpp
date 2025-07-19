//
// Created by Administrator on 25-7-8.
//常函数和常对象
#include <iostream>
using namespace std;
class A {
public:
    //this指针本质：是指针常量 指针的指向是不可修改的
    //常函数
    void showA() const {
        this->m_B = 100;
        //this->m_A = 100;
        //this = NULL //this指针不可修改指针的指向
    }
    int m_A;
    mutable int m_B;    //特殊变量：可以在常函数中修改的变量
};
void test1() {
    A a;
    a.showA();
}

void test2() {
    const A a1; //常对象
    a1.showA();
    a1.m_B = 10;    //特殊变量在常对象下可以修改
}
int main13() {
    return 0;
}
//函数可以修改成员变量和特殊变量mutable
//常函数不可以修改成员变量，可以修改特殊变量mutable
//常对象下，不可以修改成员变量，不可以利用函数修改成员变量