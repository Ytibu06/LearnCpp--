#include <iostream>
using namespace std;

int g_a = 10, g_b = 10;

int main1() {

	int a = 10, b = 10;

	cout << "局部变量a的地址：" << (int)& a << endl;
	cout << "局部变量b的地址：" << (int)& b << endl;
	cout << "全局变量g_a的地址：" << (int)& g_a << endl;
	cout << "全局变量g_b的地址：" << (int)& g_b << endl;

	system("pause");
	return 0;

}