#include <iostream>
using namespace std;
//值传递
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1: a = " << a << ", b = " << b << endl; // 输出交换后的值
}
//指针传递
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap2: a = " << *a << ", b = " << *b << endl; // 输出交换后的值
}
//引用传递
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap3: a = " << a << ", b = " << b << endl; // 输出交换后的值

}

int main21() {

	int a = 10, b=100;
	cout << "Before swap: a = " << a << ", b = " << b << endl; // 输出交换前的值
	swap1(a, b); // 调用swap1函数交换a和b的值
	cout << "After swap1: a = " << a << ", b = " << b << endl; // 输出交换后的值
	swap2(&a, &b); // 调用swap2函数交换a和b的值
	cout << "After swap2: a = " << a << ", b = " << b << endl; // 输出交换后的值
	swap3(a, b); // 调用swap3函数交换a和b的值
	cout << "After swap3: a = " << a << ", b = " << b << endl; // 输出交换后的值

	system("pause");
	return 0;
}