#include <iostream>
using namespace std;
//类模板中成员函数的创建时机
//类模板成员函数在调用时才创建
/*

class Perosn1 {
public:
	void showPerson1(){
		cout << "Person1" << endl;
	}
};

class Perosn2 {
public:
	void showPerson2() {
		cout << "Person2" << endl;
	}
};

template <class T>
class MyClass {
public:
	T obj;
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

void test() {
	MyClass<Perosn1> p1;
	p1.func1();
	//p1.func2(); // 这里会报错，因为Perosn1没有showPerson2方法
}
int main() {
	test();
	return 0;
}

*/