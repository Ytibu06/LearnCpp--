//#include <iostream>
//using namespace std;
////��̬ʹ��ʱ������ָ��ָ����������޷��ͷ�����Ķ����ڴ�(�޷�������������)
////�������������޷��Զ�ִ�У����࿪�ٶ������ڴ��޷��ͷţ����ø�����鹹���������������� �� ������������������ִ��
//
//
//
//class Person {
//	
//public:
//	Person() {
//		cout << "���๹�캯��" << endl;
//	}
//	/*
//	~Person() {
//		cout << "������������" << endl;
//		//�޷�ʹ�����Զ�ִ����������
//	}*/
//
//	//����һ���������ִ����������
//	/*virtual ~Person() {
//		cout << "������������" << endl;
//	}*/
//	
//	//���������������ִ���������������Ǳ����������ി�麯��������
//	virtual ~Person() = 0;
//	virtual void func() = 0;
//};
//
//Person::~Person() {
//	cout << "������������" << endl;
//}
//
//
//class Son : public Person{
//	
//public:
//	Son(){}
//	Son(string name) {
//		m_Name = new string(name);
//		cout << "���๹�캯��" << endl;
//	}
//	~Son() {
//		if (m_Name == NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//		cout << "������������" << endl;
//	}
//	void func() {
//		cout << "���ຯ��" << endl;
//	}
//	string* m_Name;
//};
//
//void test() {
//	Person *p = new Son("tom");
//	p->func();
//	delete p;
//}
//int main() { 
//	test(); 
//	return 0; 
//}
//
//
//
