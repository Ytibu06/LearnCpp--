#include "MyArray.hpp"

//Person类
class Person {
public:
	Person() {}
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	string name;
	int age;
};

// MyArray类的成员函数实现
template <class T>
void printArray(MyArray<T> &p ) {
	for (int i = 0; i < p.getSize(); i++)
	{
		cout << p[i] << endl;
	}
}

//Person类基于MyArray的打印函数
void printArrayPerson(MyArray<Person>& p) {
	for (int i = 0; i < p.getSize(); i++)
	{
		cout << p[i].name << " is " << p[i].age << " age" << endl;
	}
}


void test() {
	MyArray<int> arr(5);
	MyArray<int> arr2(arr); //调用拷贝构造函数

	//MyArray<int> arr3(10);
	//arr3 = arr; //调用重载赋值运算符

	for (int i = 11; i < 16; i++)
	{
		arr.PushBack(i);
	}
	cout << "数组大小: " << arr.getSize() << endl;
	cout << "数组容量: " << arr.getCapacity() << endl;
	printArray(arr);
	
	for (int i = 1; i < 6; i++)
	{
		arr2.PushBack(i);
	}
	arr2.PopBack(); //删除最后一个元素
	cout << "数组大小: " << arr.getSize() << endl;
	cout << "数组容量: " << arr.getCapacity() << endl;
	printArray(arr2);
	
}

void test1() {

	//初始化Person类的MyArray
	MyArray<Person> arr(5);
	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 22);
	Person p4("赵六", 24);
	Person p5("孙七", 26);
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);

	//
	cout << "数组大小: " << arr.getSize() << endl;
	cout << "数组容量: " << arr.getCapacity() << endl;
	arr.PopBack(); //删除最后一个元素
	printArrayPerson(arr);
}
int main() {
	test1();
	return 0;
}