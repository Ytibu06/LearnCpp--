//#include <iostream>
//using namespace std;
//
//class Person {
//	//friend Person& operator++();
//	friend ostream& operator<<(ostream& out, Person p);
//	
//private:
//	int m_A;
//	int m_B;
//
//public:
//	Person() {
//		m_A = 0;
//		m_B = 0;
//	}
//	/*Person(int m_A, int m_B) {
//		this->m_A = m_A;
//		this->m_B = m_B;
//	}*/
//	Person& operator++() {
//		m_A++;
//		m_B++;
//		return *this;
//	}
//	Person operator++(int) {
//		Person p = *this;
//		m_A++;
//		m_B++;
//		return p;
//	}
//
//};
// 
//
//ostream& operator<<(ostream& out, Person p) {
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
//	return cout;
//}
//
//void test() {
//	Person p;
//	cout<<++(++p)<<endl;
//	cout << p << endl;
//
//	Person p1;
//	cout << p1++ << endl;
//	cout << p1 << endl;
//}
//
//
//int main() {
//	test();
//	return 0;
//}