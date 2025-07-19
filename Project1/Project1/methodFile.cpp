#include <iostream>
using namespace std;
#include "swap.h"

void main() {

	int a = 10;
	int b = 20;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "交换前：" << endl;

	//调用函数
	swap(a, b);
	system("pause");
	
}