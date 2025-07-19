#include <iostream>
using namespace std;
//类模板：没有自动类型推导，模板参数必须显式指定
//类模板在模板参数列表中可以有默认参数

/*
template <class NameType, class AgeType = int>
class Person {
	public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}
	void showPeerson() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
	NameType name;
	AgeType age;
};

void test() {

	Person<string, int> p1("Alice", 30);
	Person<string> p2("Bob", 25); // 使用默认的AgeType为int
	p1.showPeerson();
	p2.showPeerson();
}

int main() {
	test();

	return 0;
}

*/