#include <iostream>
using namespace std;

struct Student {
	string name;
	int score;
};

struct Teacher {
	string name;
	Student students[5]; // ��ʦ��5��ѧ��
};

void allocateSpace(Teacher * p, int len) {
	for (int i = 0; i < len; i++) {
		cout << "�������" << i + 1 << "λ��ʦ������: ";
		cin >> p->name;
		cout << "������ý�ʦ��5λѧ����Ϣ(���� ����):" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t�������" << j + 1 << "λѧ��������: ";
			cin >> p->students[j].name;
			cout << "\t������ѧ��" << p->students[j].name << "�ķ���: ";
			cin >> p->students[j].score;
		}
		p++;

	}
}
void printInof(const Teacher * p, int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ����: " << p->name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tѧ������: " << p->students[j].name << ", ����: " << p->students[j].score << endl;
		}
		p++;
	}
}
int  main5() {

	// ������ʦ����
	Teacher teacher[3];
	 /*Teacher teacher[3] = {
	{ "����ʦ", { {"С��", 90}, {"С��", 85}, {"С��", 88}, {"С��", 92}, {"С��", 80} } },
	{ "����ʦ", {{"Сǿ", 95}, {"С��", 89}, {"С��", 91}, {"С��", 87}, {"С��", 93}} },
	{ "����ʦ", {{"С��", 84}, {"Сϼ", 90}, {"С��", 86}, {"С��", 88}, {"С��", 82}} }
};*/
	//���ɽṹ�����鳤��
	int len = sizeof(teacher) / sizeof(teacher[0]);
	// �����ʦ��ѧ����Ϣ
	allocateSpace(teacher,len);
	//�����ʦ��ѧ����Ϣ
	printInof(teacher, len);
	
	
	system("pause");
	return 0;
}