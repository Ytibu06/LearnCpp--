//#include <iostream>
//using namespace std;
//class Person {
//public:
//	int m_A;
//	int m_B;
//	Person operator+(const Person &p) {
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//};
//
//Person operator+(const Person &p1, const Person &p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//void test() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	
//	//Person p3 = operator+(p1, p2); // 全局函数重载的本质
//	//Person p3 = p1.operator+(p2); // 成员函数重载的本质
//
//	Person p3 = p1 + p2; // 使用重载的运算符
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//}
//
//int main() {
//	test();
//	return 0;
//}