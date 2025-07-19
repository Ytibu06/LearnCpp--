#include <iostream>
using namespace std;

class Person10 {
public:
	static void func() {
		m_A = 10; // 静态成员变量可以在静态函数中访问
		cout << "静态函数被调用" << endl;
	}
	static int m_A;
	int B;
};

int Person10::m_A = 0; // 静态成员变量定义

int test1() {
	Person10::func(); // 调用静态函数
	Person10 p;
	p.func(); // 也可以通过对象调用静态函数，但不推荐
	return 0;
}
int main10() {
	test1(); // 调用测试函数
	return 0;
}