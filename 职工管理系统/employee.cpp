#include <iostream>
#include "employee.h"

//���캯��
Employee::Employee(int id, string name, int Did) {
	this->Id = id;
	this->Name = name;
	this->DeptId = Did;
}

//չʾ������Ϣ
void Employee::showInfo() {
	cout << "ְ����ţ�" << this->Id
		<< "\tְ��������" << this->Name
		<< "\t��λ���ƣ�" << this->getDeptName() 
		<< "\t��λְ�����Manager����������"<<endl;
}

//��ȡ��λ����
string Employee::getDeptName() {
	return string("Ա��");
}