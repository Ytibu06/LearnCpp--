#include <iostream>
using namespace std;

class person {

public:
	person() {
		cout << "�޲ι���" << endl;
	}
	
	person(int age) {
		m_age = age;
		cout << "�вι���"<< endl;
	}
	
	person(const person & p) {
		m_age = p.m_age; // ����Ӧ���� m_p.age ������ age
		cout << "��������" << endl;
	}
	
	~person() {
		cout << "��������" << endl;
	}

	int m_age; // ����
};

void test01() {
	person p1(20); // �����޲ι��캯��
	person p2(p1); // �����вι��캯��

	cout << "p1�����䣺" << p2.m_age << endl;
}

void main5() {
	test01();

	system("pause");
	
}