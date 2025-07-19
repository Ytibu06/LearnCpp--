#include <iostream>
using namespace std;

//指针和数组
int main6() {
	//利用指针访问数组

	int arr[5] = {11,22,33,44,55};
	int* p = arr; //指针p指向数组arr的首元素
	cout << "数组的首元素为：" << *p << endl; //输出首元素

	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}