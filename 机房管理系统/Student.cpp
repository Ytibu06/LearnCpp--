#include "Student.h"

// Ĭ�Ϲ��캯��
Student::Student() {

}
//�вι���
Student::Student(int id, string name, int pwd) {
	this->Name = name; // ��������
	this->Pwd = pwd;   // ��������
	this->Id = id;     // ����ѧ��
}

//�����˵�
void Student::operMenu() {
	cout << "----------------------" << endl;
	cout << "|   ��ӭʹ��ѧ��ϵͳ   |" << endl;
	cout << "|    1. ����ԤԼ       |" << endl;
	cout << "|    2. �鿴�ҵ�ԤԼ   |" << endl;
	cout << "|    3. �鿴����ԤԼ   |" << endl;
	cout << "|    4. ȡ��ԤԼ       |" << endl;
	cout << "|    0. �˳�ϵͳ       |" << endl;
	cout << "----------------------" << endl;
}

//����ԤԼ
void Student::applyOrder() {

}

//�鿴����ԤԼ
void Student::showMyOrder() {

}

//�鿴����ԤԼ
void Student::showAllOrder() {

}

//ȡ��ԤԼ
void Student::cancelOrder() {

}

//ѧ��ѧ��