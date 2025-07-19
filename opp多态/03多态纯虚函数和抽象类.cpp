#include <iostream>
using namespace std;
//纯虚函数和抽象类
//基类函数声明为纯虚函数，即基类为抽象类（不能实例化抽象类）
// 派生类必须实现基类的纯虚函数才能实例化

/*
class Base {
public:
	virtual void func() = 0; // Pure virtual function
};

class Son : public Base{
public:
	void func() {
		cout << "Son::func()" << endl;
	}
};
class Daughter : public Base {
public:
	void func() {
		cout << "Daughter::func()" << endl;
	}
};

void test() {

	Base* base = new Son;
	base->func(); // 调用派生类的实现
	delete base; // 释放内存
	Base* base2 = new Daughter;
	base2->func(); // 调用派生类的实现
	delete base2; // 释放内存

}
int main() {
	test();
	

*/