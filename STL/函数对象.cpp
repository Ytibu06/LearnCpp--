#include <iostream>
using namespace std;

//函数对象（类）：重载函数调用操作符的类，对象称为函数对象；使用重载的()时，行为类似于函数调用，被称为仿函数

class myAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test() {
	myAdd add;
	int mid = add(10, 100);
	cout << mid << endl;
}
int main() {
	test();
	system("puase");
	return 0;
}