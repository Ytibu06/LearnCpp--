#include <iostream>
using namespace std;


struct Student {
	string name;
	int age;
	double score;
};
void printStudent(const Student * s) {
	//s->name = "����"; // const ���εĽṹ��ָ���Ͻ��޸�ָ��ָ��Ľṹ���Ա
	cout << "����: " << s->name << ", ����: " << s->age << ", ����: " << s->score << endl;
}
int main4() {

	Student s = { "����", 20, 90.5 };

	printStudent(&s);

	
	
	system("pause");
	return 0;
}