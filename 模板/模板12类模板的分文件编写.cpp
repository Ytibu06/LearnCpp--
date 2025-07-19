//#include <iostream>
//#include <string>
//#include "person.hpp" 
//using namespace std;
////类模板的分文件编写
////1、在头文件中包含源文件，即：#include "person.cpp" 
////2、将头文件和源文件都包含在同一个.hpp文件中，即：#include "person.hpp"
//
////template<class NameType, class AgeType>
////class Person {
////	NameType name;
////	AgeType age;
////public:
////	Person(NameType name, AgeType age);
////	void showPerson();
////}; 
////
////template<class NameType, class AgeType>
////Person<NameType, AgeType>::Person(NameType name, AgeType age) {
////	this->name = name;
////	this->age = age;
////}
////
////template<class NameType, class AgeType>
////void Person<NameType, AgeType>::showPerson() {
////	cout << "Name: " << this->name << ", Age: " << this->age << endl;
////}
//
//void test() {
//	Person<string, int> p1("Alice", 30);
//	p1.showPerson();
//}
//int main() {
//
//	test();
//	return 0;
//}