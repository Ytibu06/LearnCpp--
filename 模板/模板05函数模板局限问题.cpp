#include <iostream>
using namespace std;
//模板局限性：有些特定数据类型，需要具体化方式做特殊实现

/*
class Person {
public:
	string name;
	int age;

	Person(string name, int age) {
		this->age = age;
		this->name = name;
	}
};


template<typename T>
bool Compare(const T& a, const T& b) {
	return a == b;
}

// 特化模板函数
template<> bool Compare(const Person& p1, const Person& p2) {
	return p1.name == p2.name && p1.age == p2.age;
}

void test() {
	

	Person p1("Alice", 30);
	Person p2("Alice", 30);

	int a = 10;
	int b = 20;

	Compare(p1, p2) ? cout << "p1 == p2" << endl : cout << "p1 != p2" << endl;
	Compare(a, b) ? cout << "a == b" << endl : cout << "a != b" << endl;
}
int main() {
	test();
	return 0;
}

*/