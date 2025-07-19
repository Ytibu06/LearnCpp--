#include <iostream>
using namespace std;
//c++提供一种编程思想：泛型编程；主要技术是模板：函数模板，类模板
//函数模板：

/*
template <typename T>
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void test() {
	int a = 10, b = 20;

	//两种模板交换方式
	//自动类型推导
	mySwap(a, b);
	//显示指定类型
	mySwap<int>(a, b); 
	
	cout << "a = " << a << ", b = " << b << endl;
}

int main() {
	test();
	return 0;
}
*/