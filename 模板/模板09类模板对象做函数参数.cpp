#include <iostream>
using namespace std;
//��ģ���������������

/*
template<class NameType, class AgeType>
class Person {
public:
	NameType name;
	AgeType age;
	Person(NameType name, AgeType age){
		this->name = name;
		this->age = age;
	}
	void show() {
		cout << "Name: " << this->name << ", Age: " << this->age << endl;
	}
};

//ָ����������
void displayPerson(Person<string, int> &p) {
	p.show();
}

//��������Ϊ��ģ�����ĺ���������ģ�廯
template<class T1, class T2>
void displayPerson1(Person<T1, T2> &p){
	p.show();
}

//��ģ�廯
template<class T>
void displayPerson2(T &p) {
	p.show();
}
void test() {
	Person<string, int> p1("Alice", 30);
	displayPerson(p1);
	displayPerson1(p1);
	displayPerson2(p1);
}
int main() {
	test();
	return 0;
}

*/