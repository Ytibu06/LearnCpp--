#include "MyArray.hpp"

//Person��
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

// MyArray��ĳ�Ա����ʵ��
template <class T>
void printArray(MyArray<T> &p ) {
	for (int i = 0; i < p.getSize(); i++)
	{
		cout << p[i] << endl;
	}
}

//Person�����MyArray�Ĵ�ӡ����
void printArrayPerson(MyArray<Person>& p) {
	for (int i = 0; i < p.getSize(); i++)
	{
		cout << p[i].name << " is " << p[i].age << " age" << endl;
	}
}


void test() {
	MyArray<int> arr(5);
	MyArray<int> arr2(arr); //���ÿ������캯��

	//MyArray<int> arr3(10);
	//arr3 = arr; //�������ظ�ֵ�����

	for (int i = 11; i < 16; i++)
	{
		arr.PushBack(i);
	}
	cout << "�����С: " << arr.getSize() << endl;
	cout << "��������: " << arr.getCapacity() << endl;
	printArray(arr);
	
	for (int i = 1; i < 6; i++)
	{
		arr2.PushBack(i);
	}
	arr2.PopBack(); //ɾ�����һ��Ԫ��
	cout << "�����С: " << arr.getSize() << endl;
	cout << "��������: " << arr.getCapacity() << endl;
	printArray(arr2);
	
}

void test1() {

	//��ʼ��Person���MyArray
	MyArray<Person> arr(5);
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 22);
	Person p4("����", 24);
	Person p5("����", 26);
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);

	//
	cout << "�����С: " << arr.getSize() << endl;
	cout << "��������: " << arr.getCapacity() << endl;
	arr.PopBack(); //ɾ�����һ��Ԫ��
	printArrayPerson(arr);
}
int main() {
	test1();
	return 0;
}