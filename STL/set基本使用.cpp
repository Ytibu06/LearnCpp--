#include <iostream>
#include <set>
using namespace std;
//set/multiset������/������������ʹ��
//�ص㣺set�Զ����򣬲���������ظ�ֵ
//multiset: �����ظ�����

template<typename T>
void printSet(const set<T>& s) {
	for (typename set<T>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;
}

//���캯��
void test() {

	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	set<int> s1(s);

}

//��С����
void test1() {

	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	cout << "Empty: " << s.empty() << endl;
	cout << "Size: " << s.size() << endl;

	set<int> s1;
	s1.swap(s);
	printSet(s1);
	printSet(s);

}

//������ɾ������
void test2() {

	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	//ֱ�Ӳ���Ԫ��
	s.insert(40);
	printSet(s);

	//ɾ��ָ��Ԫ��
	s.erase(10);
	printSet(s);
	//ɾ����������ָԪ��
	s.erase(s.begin());
	printSet(s);
	//ɾ������Ԫ��
	s.erase(s.begin(), s.end());
	printSet(s);

	//���
	s.clear();
	printSet(s);
}

//������ͳ��
void test3() {
	
	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	//����
	set<int>::iterator pos = s.find(10);

	if (pos != s.end()) {
		cout << "Find it" << endl;
	}
	else
		cout << "Can not find it" << endl;

	//ͳ��
	s.count(10) ? cout << "10 exists" << endl : cout << "10 does not exist" << endl;
}

//pair����
void test4() {

	//��ʽһ
	pair<string, int> p("10", 20);
	cout << "Pair first: " << p.first << ", second: " << p.second << endl;

	//��ʽ��
	pair<string, int> p1 = make_pair("30", 40);
	cout << "Pair first: " << p1.first << ", second: " << p1.second << endl;
}
int main() {
	test4();
	return 0;
}