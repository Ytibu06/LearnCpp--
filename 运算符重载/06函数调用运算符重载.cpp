#include <iostream>
using namespace std;
#include <string>
//函数调用运算符重载--仿函数

class Person {
private:
	string name;
	int age;
public:
	//仿函数
	void operator()(string test) {
		cout << test << endl;
	}

};
//全局函数
void p1(string test) {
	cout << test << endl;
}

int main() {
	Person p;
	//仿函数（成员函数）
	p("hello world");
	//全局函数
	p1("你好");
	return 0;
}