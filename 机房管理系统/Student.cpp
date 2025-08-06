#include "Student.h"

// Ĭ�Ϲ��캯��
Student::Student() {

}
//�вι���
Student::Student(int id, string name, string pwd) {

	this->Id = id;     // ����ѧ��
	this->Name = name; // ��������
	this->Pwd = pwd;   // ��������

	//��ʼ��������Ϣ����
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_roomId && ifs >> com.m_Num) {
		vCom.push_back(com);
	}
	ifs.close();

}

//�����˵�
void Student::operMenu() {

	cout << "----------------------" << endl;
	cout << "|   ��ӭʹ��ѧ��ϵͳ   |" << endl;
	cout << "|    1. ����ԤԼ       |" << endl;
	cout << "|    2. �鿴�ҵ�ԤԼ   |" << endl;
	cout << "|    3. �鿴����ԤԼ   |" << endl;
	cout << "|    4. ȡ��ԤԼ       |" << endl;
	cout << "|    0. �˳�ϵͳ       |" << endl;
	cout << "----------------------" << endl;

	cout << "����ѡ��" << endl;
}

//����ԤԼ
void Student::applyOrder() {

	cout << "����ʱ�䣺��һ������" << endl;
	cout << "������ԤԼʱ�䣺" << endl;
	cout << "1����һ" << endl;
	cout << "2���ܶ�" << endl;
	cout << "3������" << endl;
	cout << "4������" << endl;
	cout << "5������" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;
	while (true) {
		cin >> date;
		if (date >= 1 && date <= 5) {
			break;
		}
		cout << "���������������" << endl;

	}
	cout << "����ԤԼʱ��Σ�" << endl;
	cout << "1������" << endl;
	cout << "2������" << endl;

	while (true) {
		cin >> interval;
		if (interval >= 1 && interval <= 2) {
			break;
		}
		cout << "���������������" << endl;
	}

	cout << "ѡ�������" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_roomId << "����Ϊ��" << vCom[i].m_Num << endl;
	}
	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {
			break;
		}
		cout << "���������������" << endl;
	}
	cout << "ԤԼ�ɹ�������У�����" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "date:" << date << " ";
	ofs << "interval:" << interval<< " ";
	ofs << "stuId:" << this->Id << " ";
	ofs << "stuName:" << this->Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();
	system("puase");
	system("cls");
	
}

//�鿴����ԤԼ
void Student::showMyOrder() {

}

//�鿴����ԤԼ
void Student::showAllOrder() {

}

//ȡ��ԤԼ
void Student::cancelOrder() {

}