#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Teacher : public Identity {
public:
	// Ĭ�Ϲ��캯��
	Teacher();
	
	// �вι���
	Teacher(int empId, string name, int pwd);
	
	// �����˵�
	virtual void operMenu() = 0; // ���麯���������˵�
	
	// �鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();
	
	// ��ʦ����
	int empId; // ����
};