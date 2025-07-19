#include <iostream>
using namespace std;

class Person {

public:
	// 构造函数
	Person() {
		cout << "构造函数" << endl;
	}
	// 析构函数
	~Person() {
		cout << "析构函数" << endl;
	}
};

int main3() {
	Person p1; // 创建对象时调用构造函数

	return 0;
}