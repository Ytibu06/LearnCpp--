//#include <iostream>
//using namespace std;
//class Person{
//	friend ostream &operator<<(ostream &out, Person &p);
//private:
//	int m_A;
//	int m_B;
//public:
//	Person(int m_A, int m_B) {
//		this->m_A = m_A;
//		this->m_B = m_B;
//	}
//
//};
//
//ostream &operator<<(ostream &cout, Person &p) {
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B;
//	return cout;
//}
//
//void test() {
//	Person p(10,10);
//	cout << p << endl;
//}
//int main() {
//	test();
//	return 0;
//}