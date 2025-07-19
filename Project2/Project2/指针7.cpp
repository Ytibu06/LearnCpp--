#include<iostream>
using namespace std;
//指针与函数，值传递与引用传递

void swap1(int a, int b);
void swap2(int *p1, int *p2);

//值传递交换数据与地址传递交换数据的区别
int main7() {

	int a = 10, b = 20;
	cout << "Before swap1: a = " << a << ", b = " << b << endl;
	swap1(a, b);
	cout << "After swap1: a = " << a << ", b = " << b << endl;
	cout << "------------------------" << endl;

	cout << "Before swap2: a = " << a << ", b = " << b << endl;
	swap2(&a, &b);
	cout << "After swap2: a = " << a << ", b = " << b << endl;
	

	system("pause");
	return 0;
}


//值传递交换数据
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//地址传递交换数据
void swap2(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
