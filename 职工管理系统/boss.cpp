#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int Did) {
	this->Id = id;
	this->Name = name;
	this->DeptId = Did;
}

//չʾ������Ϣ
void Boss::showInfo() {
	cout << "ְ����ţ�" << this->Id
		<< "\tְ��������" << this->Name
		<< "\t��λ���ƣ�" << this->getDeptName()
		<< "\t��λְ���������" << endl;
}

//��ȡ��λ����
string Boss::getDeptName() {
	return string("�ϰ�");
}