#include <iostream>
using namespace std;

//�ṹ��Ĵ���
struct Student {
	string name;
	int age;
	double score;
}s3;


int main1() {
	//�����ṹ�����1
	struct Student s1;
	s1.name = "����";
	s1.age = 20;
	s1.score = 90.5;
	cout << "����: " << s1.name << ", ����: " << s1.age << ", ����: " << s1.score << endl;

	//�����ṹ�����2
	struct Student s2 = { "����", 22, 85.0 };
	cout << "����: " << s2.name << ", ����: " << s2.age << ", ����: " << s2.score << endl;

	//�����ṹ�����3
	s3.name = "����";
	s3.age = 21;
	s3.score = 88.0;
	cout << "����: " << s3.name << ", ����: " << s3.age << ", ����: " << s3.score << endl;


	system("pause");
	return 0;
}