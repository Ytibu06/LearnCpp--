//#include <iostream>
//using namespace std;
////��ֵ���������
//
//class Person {
//
//public:
//	Person(int age) {
//		m_Age = new int(age);
//	}
//	int* m_Age;
//
//	// ���ظ�ֵ�����
//	Person& operator=(const Person& p) {
//		if (this == &p) {
//			return *this; // ��ֹ�Ը�ֵ
//		}
//		delete m_Age; // �ͷ�ԭ���ڴ�
//		m_Age = new int(*p.m_Age); // ���
//		return *this;
//	}
//};
//void test() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p1 = p2 = p3; // ��ʽ��ֵ
//
//	cout << "p1's age: " << *p1.m_Age << endl; // ��� p1 ������
//	cout << "p2's age: " << *p2.m_Age << endl; // ��� p2 ������
//	cout << "p3's age: " << *p3.m_Age << endl; // ��� p3 ������
//
//}
//
//int main() {
//	test();
//	return 0;
//}