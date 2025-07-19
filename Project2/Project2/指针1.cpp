#include <iostream>
using namespace std;

void main1() {

	//定义变量
	int a = 10;
	//定义指针
	int* p;

	//指针指向变量a的地址
	p = &a;

	//输出变量a的地址
	cout << "a的地址是：" << &a << endl;
	//输出指针p的值
	cout << "p的值是：" << p << endl;
	

	system("pause");
}