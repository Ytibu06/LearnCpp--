//#include <iostream>
//#include <string>
//using namespace std;
////��Ա����������ʵ��
//
//
//template<class NameType,class AgeType>
//class Person {
//	NameType name;
//	AgeType age;
//public:
//	Person(NameType name, AgeType age);
//	/*{
//		this->name = name;
//		this->age = age;
//	}*/
//	void showPerson();
//	/*{
//		cout << "Name: " << this->name << ", Age: " << this->age << endl;
//	}*/
//};
//
//template<class NameType, class AgeType>
//Person<NameType, AgeType>::Person(NameType name, AgeType age) {
//	this->name = name;
//	this->age = age;
//}
//
//template<class NameType, class AgeType>
//void Person<NameType,AgeType>::showPerson() {
//	cout << "Name: " << this->name << ", Age: " << this->age << endl;
//}
//void test() {
//	Person<string, int> p1("Alice", 30); // ʵ����Person�࣬NameTypeΪstring��AgeTypeΪint
//	p1.showPerson(); // ���: Name: Alice, Age: 30
//}
//int main() {
//	test();
//	return 0;
//}
