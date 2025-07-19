#include <iostream>
using namespace std;

int max(int a, int b);

//cpp函数的实现
void main1(){

	int a, b;
	cout << "请输入两个整数：";
	cin >> a >> b; // 输入两个整数
	cout << "较大的数是：" << max(a, b) << endl; // 调用max函数并输出结果
	system("pause"); // 暂停程序以查看输出

}

int max(int a, int b){
	return (a > b) ? a : b; // 返回较大的数
}