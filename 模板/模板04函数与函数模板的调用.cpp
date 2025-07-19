#include <iostream>
using namespace std;
//总结：优先调用函数，如果没有函数，则调用函数模板，如果没有函数模板，则调用函数模板重载。
//系统优先调用不发生隐式转换的函数模板


/*
void myPrint(int a, int b) {
	cout << "普通函数" << endl;
}

template <typename T>
void myPrint(T a, T b) {
	cout << "函数模板" << endl;
}

template <typename T>
void myPrint(T a, T b, T c) {
	cout << "函数模板重载" << endl;
}

int main() {
	int a = 10, b = 20, c = 30;
	char a1 = 'A', b1 = 'B';
	myPrint(a, b); // 调用普通函数
	myPrint<>(1, 2); // 调用函数模板
	myPrint<int>(1, 2); // 调用函数模板
	myPrint(a, b, c); // 调用函数模板重载
	myPrint(a1, b1); // 调用函数模板

	return 0;
}

*/