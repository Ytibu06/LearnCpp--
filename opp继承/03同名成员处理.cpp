/*
#include <iostream>
using namespace std;
//ͬ����Ա����

class Person {
public:
	int A = 100;

	void func() {
		cout << "Person func" << endl;
	}
	void func(int a) {
		cout << "Person func with int: " << a << endl;
	}
};

class Son :public Person {
public:
	int A = 200;
	void func() {
		cout << "Son func" << endl;
	}
};

void test() {

	Son s1;
	cout << s1.A << endl; // ���100�������Ա�����˸����Ա
	cout << s1.Person::A << endl; // ���200��ʹ�������������������ʸ����Ա

	s1.func(); // ���"Son func"�������Ա�����˸����Ա
	s1.Person::func(); // ���"Person func"��ʹ�������������������ʸ����Ա
	s1.Person::func(100); // ���"Person func with int: 100"������û�и��Ǹ�������غ���

}

int main() {
	test();
	return 0;
}
*/
