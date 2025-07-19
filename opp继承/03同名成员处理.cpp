/*
#include <iostream>
using namespace std;
//同名成员处理

class Person {
public:
	int A = 100;

	void func() {
		cout << "Person func" << endl;
	}
	void func(int a) {
		cout << "Person func with int: " << a << endl;
	}
};

class Son :public Person {
public:
	int A = 200;
	void func() {
		cout << "Son func" << endl;
	}
};

void test() {

	Son s1;
	cout << s1.A << endl; // 输出100，子类成员覆盖了父类成员
	cout << s1.Person::A << endl; // 输出200，使用作用域解析运算符访问父类成员

	s1.func(); // 输出"Son func"，子类成员覆盖了父类成员
	s1.Person::func(); // 输出"Person func"，使用作用域解析运算符访问父类成员
	s1.Person::func(100); // 输出"Person func with int: 100"，子类没有覆盖父类的重载函数

}

int main() {
	test();
	return 0;
}
*/
