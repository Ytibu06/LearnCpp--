#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	double score;
};

int main3() {

	//�����ṹ�����
	struct Student s1 = { "����", 20, 90.5 };
	//ָ��ָ��ṹ��
	Student* p = &s1;
	//ָ����ʽṹ���Ա:ָ��->��Ա��
	cout << "����: " << p->name << ", ����: " << p->age << ", ����: " << p->score << endl;


	system("pause");
	return 0;
}