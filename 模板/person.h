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