//#include <iostream>
//#include <set>
//using namespace std;
////set/multiset������/������������ʹ��
////�ص㣺set�Զ����򣬲���������ظ�ֵ
////multiset: �����ظ�����
//
//class Person {
//	string name;
//	int age;
//public:
//	Person() {}
//	Person(string name, int age)  { this->name = name, this->age = age; }
//	void setName(string name) { name = name; }
//	void setAge(int a) { age = a; }
//	string getName() const { return name; }
//	int getAge() const { return age; }
//};
//
//template<typename T>
//void printSet(const set<T>& s) {
//	for (typename set<T>::const_iterator it = s.begin(); it != s.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//class MyCompare {
//	public:
//	bool operator()(const int& a, const int& b) const {
//		return a > b; // ��������
//	}
//};
//
//class PersonCompare {
//public:
//	bool operator()(const Person& p1, const Person& p2)  const{
//		return p1.getAge() < p2.getAge(); // ��������������
//	}
//};
//
//
////���캯��
//void test() {
//
//	set<int> s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	printSet(s);
//
//	set<int> s1(s);
//
//}
//
////��С����
//void test1() {
//
//	set<int> s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	printSet(s);
//
//	cout << "Empty: " << s.empty() << endl;
//	cout << "Size: " << s.size() << endl;
//
//	set<int> s1;
//	s1.swap(s);
//	printSet(s1);
//	printSet(s);
//
//}
//
////������ɾ������
//void test2() {
//
//	set<int> s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	printSet(s);
//
//	//ֱ�Ӳ���Ԫ��
//	s.insert(40);
//	printSet(s);
//
//	//ɾ��ָ��Ԫ��
//	s.erase(10);
//	printSet(s);
//	//ɾ����������ָԪ��
//	s.erase(s.begin());
//	printSet(s);
//	//ɾ������Ԫ��
//	s.erase(s.begin(), s.end());
//	printSet(s);
//
//	//���
//	s.clear();
//	printSet(s);
//}
//
////������ͳ��
//void test3() {
//	
//	set<int> s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	printSet(s);
//
//	//����
//	set<int>::iterator pos = s.find(10);
//
//	if (pos != s.end()) {
//		cout << "Find it" << endl;
//	}
//	else
//		cout << "Can not find it" << endl;
//
//	//ͳ��
//	s.count(10) ? cout << "10 exists" << endl : cout << "10 does not exist" << endl;
//}
//
////pair����
//void test4() {
//
//	//��ʽһ
//	pair<string, int> p("10", 20);
//	cout << "Pair first: " << p.first << ", second: " << p.second << endl;
//
//	//��ʽ��
//	pair<string, int> p1 = make_pair("30", 40);
//	cout << "Pair first: " << p1.first << ", second: " << p1.second << endl;
//	
//}
//
////set�������ݵ��Զ��������������
//void test5() {
//
//	set<int> s;
//	s.insert(30);
//	s.insert(20);
//	s.insert(10);
//	printSet(s);
//
//	set<int, MyCompare> s2;
//
//	s2.insert(30);
//	s2.insert(20);
//	s2.insert(10);
//
//	for(set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
////set�����Զ��������Զ����������
//void test6() {
//
//	//�Զ��������Զ����������
//	set<Person,PersonCompare> s;
//
//	Person p1("Alice", 30);
//	Person p2("Bob", 25);
//	Person p3("Charlie", 35);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	
//	for(set<Person, PersonCompare>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << "Name: " << it->getName() << ", Age: " << it->getAge() << endl;
//	}
//}
//int main() {
//
//	test6();
//	return 0;
//
//}