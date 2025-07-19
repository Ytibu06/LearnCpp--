#include <iostream>
using namespace std;

int main2() {
	int a = 10;
	int& a_1 = a; // 创建引用a_，引用变量a
	cout << "a = " << a << endl; // 输出a的值
	cout << "a_1 = " << a_1 << endl; // 输出a_的值

	a_1 = 20; // 修改a_的值

	cout << "a = " << a << endl; // 输出修改后的a的值
	cout << "a_1 = " << a_1 << endl; // 输出修改后的a_的值

	system("pause");
	return 0;
	
}