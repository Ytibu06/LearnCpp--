//
// Created by Administrator on 25-7-8.
//�������ͳ�����
#include <iostream>
using namespace std;
class A {
public:
    //thisָ�뱾�ʣ���ָ�볣�� ָ���ָ���ǲ����޸ĵ�
    //������
    void showA() const {
        this->m_B = 100;
        //this->m_A = 100;
        //this = NULL //thisָ�벻���޸�ָ���ָ��
    }
    int m_A;
    mutable int m_B;    //��������������ڳ��������޸ĵı���
};
void test1() {
    A a;
    a.showA();
}

void test2() {
    const A a1; //������
    a1.showA();
    a1.m_B = 10;    //��������ڳ������¿����޸�
}
int main13() {
    return 0;
}
//���������޸ĳ�Ա�������������mutable
//�������������޸ĳ�Ա�����������޸��������mutable
//�������£��������޸ĳ�Ա���������������ú����޸ĳ�Ա����