//#include <iostream>
//using namespace std;
////赋值运算符重载
//
//class Person {
//
//public:
//	Person(int age) {
//		m_Age = new int(age);
//	}
//	int* m_Age;
//
//	// 重载赋值运算符
//	Person& operator=(const Person& p) {
//		if (this == &p) {
//			return *this; // 防止自赋值
//		}
//		delete m_Age; // 释放原有内存
//		m_Age = new int(*p.m_Age); // 深拷贝
//		return *this;
//	}
//};
//void test() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p1 = p2 = p3; // 链式赋值
//
//	cout << "p1's age: " << *p1.m_Age << endl; // 输出 p1 的年龄
//	cout << "p2's age: " << *p2.m_Age << endl; // 输出 p2 的年龄
//	cout << "p3's age: " << *p3.m_Age << endl; // 输出 p3 的年龄
//
//}
//
//int main() {
//	test();
//	return 0;
//}