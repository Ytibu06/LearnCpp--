/*#include <iostream>
using namespace std;
//多继承语法
//class className : extendMethod baseClass1, extendMethod baseClass2, ... {};

class A {
public:
	A() {
		m_A = 100;
	}
	int m_A;
};
class B {
public:
	B() {
		m_A = 200;
	}
	int m_A;
};

class Son :public A, public B {
public:
	Son(){
		m_A = 300;
		m_D = 400;
	}
		int m_A;
		int m_D;
};
void test() {
	Son s;
	s.m_A = 10; // A类的成员变量
	cout << s.m_A << endl;
	s.A::m_A = 20; // A类的成员变量
	cout << s.A::m_A << endl;
	s.B::m_A = 30; // B类的成员变量
	cout << s.B::m_A << endl;
}
int main() {
	test();
	return 0;
}

*/