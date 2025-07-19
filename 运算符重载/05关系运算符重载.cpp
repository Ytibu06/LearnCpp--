//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Person& p) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(Person& p) {
//		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age) {
//			return true;
//		}
//		return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test() {
//	Person p1("tom", 18);
//	Person p2("tom", 18);
//
//	if (p1 == p2) {
//		cout << "相等" << endl;
//	}
//
//	Person p3("tom", 19);
//	Person p4("tom", 18);
//	if (p3 != p4) {
//		cout << "不相等" << endl;
//	}
//}
//int main() {
//	test();
//	return 0;
//}