#include <iostream>
#include "manager.h"

//���캯��
Manager::Manager(int id, string name, int Did) {
	this->Id = id;
	this->Name = name;
	this->DeptId = Did;
}

//չʾ������Ϣ
void Manager::showInfo() {
	cout << "ְ����ţ�" << this->Id
		<< "\tְ��������" << this->Name
		<< "\t��λ���ƣ�" << this->getDeptName()
		<< "\t��λְ�����Boss����������" << endl;
}

//��ȡ��λ����
string Manager::getDeptName() {
	return string("����");
}