#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Manager : public Identity {
public:
	// Ĭ�Ϲ��캯��
	Manager();

	// �вι���
	Manager(string name, int pwd);

	// �����˵�
	virtual void operMenu() = 0; // ���麯���������˵�

	//����˺�
	void addPerson();

	//�鿴�����˺�
	void showAllPerson();

	// �鿴������Ϣ
	void showAllRoom();

	// ���ԤԼ
	void cleanFile();

	
};
