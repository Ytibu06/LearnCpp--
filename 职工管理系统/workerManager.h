#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;
#define FILENAME "empFile.txt"

//����WorkerManager����ϵͳ����
class WorkerManager {
public:
	//ְ������
	int EmpNum;

	//ְ������ָ��
	Worker** EmpArray;

	//�ж��ļ��Ƿ�Ϊ��
	bool FileIsEmpty;

	//���캯��
	WorkerManager();

	//չʾ�˵�����
	void Show_Menu();

	//�˳��ӿ�
	void ExitSystem();

	//����Ա��
	void Add_Emp();

	//������ļ�
	void save();

	//ͳ���ļ���ְԱ����
	int getEmpNum();

	//��ʼ��ְ����Ϣ
	void init_Emp();

	//չʾְ����Ϣ
	void Show_Emp();

	//ɾ��Ա����Ϣ
	void Del_Emp();

	//�ж�ְ���Ƿ���ڣ�����ְ������λ��
	int IsExist(int id);

	//�޸�ְ����Ϣ
	void Mod_Emp();

	//����ְ����Ϣ
	void Find_Emp();

	//ְԱ��Ϣ����
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();
};