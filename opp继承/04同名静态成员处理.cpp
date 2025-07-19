/*#include <iostream>
using namespace std;

class Base {
public:
	static int m_A;
	static void func() {
		cout << "Base::func()" << endl;
	}
	static void func(int a) {
		cout << "Base::BaseFunc()" << a << endl;
	}
};
int Base::m_A = 10;

class Son : public Base {
public:
	static int m_A;
	static void func() {
		cout << "Son::func()" << endl;
	}
};
int Son::m_A = 20;

void test() {

	Son s;
	//静态同名成员属性访问
	cout << "Son.m_A  = " << s.m_A << endl; // 20
	cout << "Base.m_A  = " << s.Base::m_A << endl; // 10
	cout << "Son::m_A  = " << Son::m_A << endl; // 20
	cout << "Son::Base::m_A  = " << Son::Base::m_A << endl; // 10

	//静态同名成员函数访问
	s.func(); // Son::func()
	s.Base::func();


	Son::func(); // Son::func()
	Son::Base::func(); // Base::func()
	Son::Base::func(100);
}
int main() {

	test();
	return 0;
}*/

