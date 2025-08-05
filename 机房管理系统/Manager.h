#pragma once
#include <iostream>
#include <fstream>
#include "globalFile.h"
#include "Identity.h"
#include "Student.h"
#include "Teacher.h"
#include <vector>
using namespace std;

class Manager : public Identity {
public:
	// Ĭ�Ϲ��캯��
	Manager();

	// �вι���
	Manager(string name, string pwd);

	// �����˵�
	virtual void operMenu(); // ���麯���������˵�

	//����˺�
	void addPerson();

	//�鿴�����˺�
	void showAllPerson();

	// �鿴������Ϣ
	void showAllRoom();

	// ���ԤԼ
	void cleanFile();

	//��ʼ����Ա��Ϣ����
	void initVector();

	//ѧ������
	vector<Student> vStu;
	//��ʦ����
	vector<Teacher> vTea;
	
};
