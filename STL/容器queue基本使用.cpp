//#include <iostream>
//#include <queue>
//using namespace std;
////queue�����У��Ļ���ʹ��
//
////Person��Ĵ���
//class Person {
//	string name;
//	int age;
//public:
//	Person(){}
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	void setName(string name) { this->name = name; }
//	void setAge(int age) { this->age = age; }
//	string getName() { return name; }
//	int getAge() { return age; }
//};
//
////���캯��
//void test() {
//
//	//Ĭ�Ϲ���
//	queue<Person> q;
//
//	Person p1("1", 10);
//	Person p2("2", 20);
//	Person p3("3", 30);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	
//	//��������
//	queue<Person> q1(q);
//
//}
//
////��ֵ����
//void test1() {
//
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	//��ֵ���������
//	queue<int> q1;
//	q1 = q;
//
//}
//
////���ݴ�ȡ
//void test2() {
//	
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	//��β���Ԫ��
//	q.push(4);
//	//����ɾ��Ԫ��
//	q.pop();
//	//����Ԫ��
//	cout << "Front: " << q.front() << endl;
//	//��βԪ��
//	cout << "Back: " << q.back() << endl;
//}
//
////������С
//void test3() {
//
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	cout << "Empty: " << q.empty() << endl;
//	cout << "Size: " << q.size() << endl;
//
//}
//int main() {
//
//	test();
//	return 0;
//
//}