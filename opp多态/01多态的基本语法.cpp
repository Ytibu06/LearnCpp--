#include <iostream>
using namespace std;
//多态分类：静态多态（函数重载和运算符重载），动态多态（派生类和虚函数实现运行时多态）
/*
class Animal {
public:
	//多态函数写为虚函数
	virtual void speak() {
		cout << "animal speak" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "dog speak" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() {
		cout << "cat speak" << endl;
	}
};

void doSpeak(Animal& animal) {
	animal.speak();

}

void test() {
	Cat cat;
	doSpeak(cat); // cat speak
	cat.speak(); // cat speak

	Dog dog;
	doSpeak(dog); // dog speak
	dog.speak(); // dog speak
}

int main() {
	test();

	return 0;
}
*/
