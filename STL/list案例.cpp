//#include <iostream>
//#include <list>
//using namespace std;
//
//
//class Person {
//	string name;
//	int age;
//	int height;
//public:
//	Person() {}
//	Person(string name, int age, int height) { this->name = name; this->age = age; this->height = height; }
//
//	void setName(string name) { this->name = name; }
//	void setAge(int age) { this->age = age; }
//	void setHeight(int height) { this->height = height; }
//
//	string getName() const { return name; }
//	int getAge() const { return age; }
//	int getHeight() const { return height; }
//
//	~Person() {}
//};
//
//template<typename T>
//void printPerson(const list<T> &L) {
//	for (typename list<T>:: const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << (*it).getName() << "\t年龄：" << (*it).getAge() << "\t身高：" << (*it).getHeight() << endl;
//	}
//}
//
//bool comparePerson(const Person& p1, const Person& p2) {
//	if (p1.getAge() != p2.getAge()) {
//		return p1.getAge() < p2.getAge();
//	}else 
//		return p1.getHeight() > p2.getHeight();
//}
//int main() {
//
//	list<Person> L;
//
//	Person p1("1", 35, 175);
//	Person p2("2", 45, 165);
//	Person p3("3", 30, 180);
//	Person p4("4", 35, 170);
//	Person p5("5", 45, 180);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//
//	//测试输出
//	//printPerson(L);
//	
//	//排序：
//	L.sort(comparePerson);
//
//	printPerson(L);
//
//	return 0;
//}