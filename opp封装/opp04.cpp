#include <iostream>
using namespace std;

class Person {

    int m_age;

public:
    Person() {
        cout << "�޲ι���" << endl;
    }

    Person(int a) {
        m_age = a;
        cout << "�вι���" << endl;
    }

    Person(const Person & p) {
        cout << "��������" << endl;
    }
};

//����
int main4() {
    //���ŷ�
    Person p1; // �����޲ι��캯��
    Person p2(20); // �����вι��캯��
    Person p3(p1); // ���ÿ������캯��

    //ע�⣺Person p();  // �ᱻϵͳ��Ϊ�� һ�����������������Ƕ��󴴽�

    //��ʾ��
    Person p4 ; // �����޲ι��캯��
    Person p5 = Person(30); // �����вι��캯��
    Person p6 = Person(p2); // ���ÿ������캯��

    //ע�⣺Person(10); // ִ�к�ϵͳ������������������
    //ע��: Person(p3); // ��Ҫʹ�ÿ������캯����������������Ϊ���ᵼ����Դ�˷�(�ض���)

    //��ʽת��
    Person p7 = 40; // �����вι��캯������ʽת�� Person p7 = Person(40);
    Person p8 = p1; // ���ÿ������캯������ʽת�� Person p8 = Person(p1);

    return 0;
}