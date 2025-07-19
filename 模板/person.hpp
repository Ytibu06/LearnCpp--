#pragma once
#include <iostream>
#include <string>
using namespace std;


template<class NameType, class AgeType>
class Person {
	NameType name;
	AgeType age;
public:
	Person(NameType name, AgeType age);
	void showPerson();
};

template<class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age) {
	this->name = name;
	this->age = age;
}

template<class NameType, class AgeType>
void Person<NameType, AgeType>::showPerson() {
	cout << "Name: " << this->name << ", Age: " << this->age << endl;
}