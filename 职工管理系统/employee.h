#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//��ͨԱ���ļ�
class Employee : public Worker {
public:
	//���캯��
	Employee(int id, string name, int Did);

	//չʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};