#pragma once
#include <iostream>
#include <string>
using namespace std;

//ְ��������
class Worker {
public:
	//ְ�����
	int Id;
	//ְ������
	string Name;
	//���ű��
	int DeptId;

	//չʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0;
};
