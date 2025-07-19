//#include <iostream>
//#include <queue>
//using namespace std;
////queue（队列）的基本使用
//
////Person类的创建
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
////构造函数
//void test() {
//
//	//默认构造
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
//	//拷贝构造
//	queue<Person> q1(q);
//
//}
//
////赋值操作
//void test1() {
//
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	//赋值运算符重载
//	queue<int> q1;
//	q1 = q;
//
//}
//
////数据存取
//void test2() {
//	
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	//队尾添加元素
//	q.push(4);
//	//队首删除元素
//	q.pop();
//	//队首元素
//	cout << "Front: " << q.front() << endl;
//	//队尾元素
//	cout << "Back: " << q.back() << endl;
//}
//
////容器大小
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