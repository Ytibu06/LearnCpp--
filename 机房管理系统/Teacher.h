#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "orderFile.h"
#include "Identity.h"
using namespace std;

class Teacher : public Identity {
public:
	// Ĭ�Ϲ��캯��
	Teacher();
	
	// �вι���
	Teacher(int empId, string name, string pwd);
	
	// �����˵�
	virtual void operMenu(); // ���麯���������˵�
	
	// �鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();
	
	// ��ʦ����
	int empId; // ����
};