#include <iostream>
#include  <vector>
#include <string>
#include <algorithm>
using namespace std;

/*
class Person {
	string name;
	int age;
public:
	Person() {}
	Person(string name, int age) : name(name), age(age) {
		this->name = name;
		this->age = age;
	}
	string getName() const { return name; }
	int getAge() const { return age; }
};
void test() {
	//����vector����
	vector<Person> v;

	Person p1("Alice", 30);
	Person p2("Bob", 25);
	Person p3("Charlie", 35);
	Person p4("David", 28);
	Person p5("Eve", 22);

	//β������ 
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//ͨ����������������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//cout << "Person: " << (*it)->getName() << "\tAge: " << (*it)->getAge() << endl;
		cout << "Person: " << it->getName() << "\tAge: " << it->getAge() << endl;  // �����ǰ������ָ���Ԫ��
	}
	
}
void test2() {
	//����vector����
	vector<Person*> v;

	Person p1("Alice", 30);
	Person p2("Bob", 25);
	Person p3("Charlie", 35);
	Person p4("David", 28);
	Person p5("Eve", 22);

	//β������ 
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//ͨ����������������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "Person: " << (*it)->getName() << "\tAge: " << (*it)->getAge() << endl;
	}

}
int main() {
	test();
	return 0;
}

*/