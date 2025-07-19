#include <iostream>
using namespace std;

class person {

public:
	person() {
		cout << "无参构造" << endl;
	}
	
	person(int age) {
		m_age = age;
		cout << "有参构造"<< endl;
	}
	
	person(const person & p) {
		m_age = p.m_age; // 这里应该是 m_p.age 而不是 age
		cout << "拷贝构造" << endl;
	}
	
	~person() {
		cout << "析构函数" << endl;
	}

	int m_age; // 年龄
};

void test01() {
	person p1(20); // 调用无参构造函数
	person p2(p1); // 调用有参构造函数

	cout << "p1的年龄：" << p2.m_age << endl;
}

void main5() {
	test01();

	system("pause");
	
}