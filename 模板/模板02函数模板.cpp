#include <iostream>
using namespace std;
//函数模板注意事项：
// 1、自动类型推导：必须推导出一致的数据类型T才可以使用函数模板
// 2、显示指定类型：必须要确定出T的数据类型才可以使用函数模板

//template <class T> //两种写法都可以
/*
template <typename T>
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
void func() {
	cout << "func<T>() called" << endl;
}

void test() {
	int a = 10, b = 20;
	//两种模板交换方式
	// 1、自动类型推导：必须推导出一致的数据类型T才可以使用函数模板
	mySwap(a, b);
	
	cout << "a = " << a << ", b = " << b << endl;
}

void test2() {

	//2、显示指定类型：必须要确定出T的数据类型才可以使用函数模板
	func<int>(); //显示指定类型
}

int main() {
	test();
	test2();
	return 0;
}

*/