#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

//ѧ����
class Student : public Identity {
public:
	// Ĭ�Ϲ��캯��
	Student();

	//�вι���
	Student(int id, string name, string pwd);

	//�����˵�
	virtual void operMenu(); // ���麯���������˵�

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int Id; // ѧ��
};