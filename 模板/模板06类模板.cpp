#include <iostream>
#include <string>
using namespace std;
//类模板
// 模板类没有自动推导类型的使用方式，可以使用任意类型的参数
//类模板在参数列表可以有默认参数

/*
template<class NameType, class AgeType>
class Person {
public:
	NameType name;
	AgeType age;

	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}
	void showPerson() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

void test() {
	Person<string, int> p1("Alice", 22);
	p1.showPerson();
}
int main() {
	test();
	return 0;
}

*/
