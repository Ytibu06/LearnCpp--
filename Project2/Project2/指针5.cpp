#include <iostream>
using namespace std;

//const和指针的关系
int main5() {

	
	int a = 10;
	int b = 20;

	cout <<"---------------------------------"<< endl;
	//常量指针
	const int * p = &a;
	//const修饰指针：针指指向可以修改，但指针的指向的值不可修改

	p = &b; // 正确：可以修改指针指向的地址
	//*p = 20; // 错误：不能修改指针指向的值
	
	cout << "---------------------------------" << endl;
	//指针常量
	int * const q = &a;
	//指针的指向不可以改，指针指向的值可以修改
	*q = 30; // 正确：可以修改指针指向的值
	//q = &b; // 错误：不能修改指针的指向

	cout << "---------------------------------" << endl;
	//修饰指针即修饰常量
	const int * const r = &a;
	//指针的指向不可以改，指针指向的值也不可以修改
	//*r = 40; // 错误：不能修改指针指向的值
	//r = &b; // 错误：不能修改指针的指向



	system("pause");
	return 0;
}