#include <iostream>
#include <string>
using namespace std;

/*
template<class NameType, class AgeType>
class Person;

template<class NameType, class AgeType>
void showPerson2(Person<NameType, AgeType> p) {
	cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

template<class NameType, class AgeType>
class Person {
private:
	NameType name;
	AgeType age;
	friend void showPerson(Person<NameType, AgeType> p) {
		cout << "Name: " << p.name << ", Age: " << p.age << endl;
	}
	friend void showPerson2<>(Person<NameType, AgeType> p);
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}
	
};

void test() {
	Person<string, int> p1("Alice", 18);
	Person<string, int> p2("Lee", 20);
	showPerson(p1);
	showPerson2(p2);
}
int main() {
	test();
	return 0;
}

*/