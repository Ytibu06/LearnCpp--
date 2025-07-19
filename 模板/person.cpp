#include "person.h"

template<class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age) {
	this->name = name;
	this->age = age;
}

template<class NameType, class AgeType>
void Person<NameType, AgeType>::showPerson() {
	cout << "Name: " << this->name << ", Age: " << this->age << endl;
}