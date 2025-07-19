//#include <iostream>
//using namespace std;
////多态使用时：父类指针指向子类对象，无法释放子类的堆区内存(无法调用析构函数)
////子类析构函数无法自动执行：子类开辟堆区的内存无法释放，利用父类的虚构函数或纯虚析构函数 来 触发子类析构函数的执行
//
//
//
//class Person {
//	
//public:
//	Person() {
//		cout << "父类构造函数" << endl;
//	}
//	/*
//	~Person() {
//		cout << "父类析构函数" << endl;
//		//无法使子类自动执行析构代码
//	}*/
//
//	//方法一：子类可以执行析构函数
//	/*virtual ~Person() {
//		cout << "父类析构函数" << endl;
//	}*/
//	
//	//方法二：子类可以执行析构函数，但是必须声明父类纯虚函数的内容
//	virtual ~Person() = 0;
//	virtual void func() = 0;
//};
//
//Person::~Person() {
//	cout << "父类析构函数" << endl;
//}
//
//
//class Son : public Person{
//	
//public:
//	Son(){}
//	Son(string name) {
//		m_Name = new string(name);
//		cout << "子类构造函数" << endl;
//	}
//	~Son() {
//		if (m_Name == NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//		cout << "子类析构函数" << endl;
//	}
//	void func() {
//		cout << "子类函数" << endl;
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
