#include "Manager.h"

// Ĭ�Ϲ��캯��
Manager::Manager() {

}

// �вι���
Manager::Manager(string Name, string Pwd) {

	//��ֵ������Ϣ
	this->Name = Name;
	this->Pwd = Pwd;

	//��ʼ���˺���Ϣ����
	this->initVector();

	//��ʼ��������Ϣ����
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_roomId && ifs >> com.m_Num) {
		vCom.push_back(com);
	}
	ifs.close();

}

//�����֤��
bool Manager::checkId() {

	//�����ļ�����
	ifstream ifs;
	ifs.open(ADMIN_FILE, ios::in);
	
	string fName;
	string fPassword;
	string name;
	string pwd;
	cout << "�������Ա�˻���" << endl;
	cin >> name;
	cout << "�������Ա���룺" << endl;
	cin >> pwd;
	system("cls");

	while (ifs >> fName && ifs >> fPassword) {
		if (fName == name && fPassword == pwd) {
			ifs.close();
			return true;
		}
	}
	ifs.close();
	return false;

}

// �����˵�
void Manager::operMenu() {

	cout << "����Ա�˺ſ�ʼ��½��" << this->Name << "��½�ɹ�" << endl;
	cout << "\t  --------------------------\n";
	cout << "\t |       1������˺�        |\n";
	cout << "\t |       2���鿴�˺�        |\n";
	cout << "\t |       3���鿴����        |\n";
	cout << "\t |       4�����ԤԼ        |\n";
	cout << "\t |       0��ע����¼        |\n";
	cout << "\t  --------------------------\n";
	cout << "����ѡ��" << endl; 

}

//����˺�
void Manager::addPerson() {

	//��Ϣ��ʾ
	cout << "ѡ������˺�����" << endl;
	cout << "1��ѧ���˻�" << endl;
	cout << "2����ʦ�˻�" << endl;

	string fileName;
	string tip;
	string errorTip;
	ofstream ofs;
	
	//�����û�ѡ��
	int select = 0;
	cin >> select;
	if (select == 1) {

		fileName = STUDENT_FILE;
		tip = "����ѧ��ѧ��";
		errorTip = "ѧ��ѧ���ظ���������������";
	}
	else if (select == 2) {

		fileName = TEACHER_FILE;
		tip = "�����ʦ����";
		errorTip = "��ʦ�����ظ���������������";
	}
	else {
		cout << "����������³���" << endl;
		return;
	}

	ofs.open(fileName, ios::out | ios::app);
	int id;
	string name;
	string pwd;

	cout << tip << endl;

	while (true) {
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) {
			cout << errorTip << endl;
		}
		else
			break;
	}
	
	cout << "��������" << endl;
	cin >> name;
	cout << "�����˺�����" << endl;
	cin >> pwd;

	ofs << id << " " << name << " " << pwd  << endl;

	system("pause");
	system("cls");

	ofs.close();

	this->initVector();
	
}

//��ʼ����Ա��Ϣ����
void Manager::initVector() {

	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	vStu.clear();
	vTea.clear();

	Student s;
	while (ifs >> s.Id && ifs >> s.Name && ifs >> s.Pwd) {
		vStu.push_back(s);
	}
	ifs.close();

	ifs.open(TEACHER_FILE, ios::in);
	/*if (!ifs.is_open()) {
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}*/
	Teacher t;
	while (ifs >> t.empId && ifs >> t.Name && ifs >> t.Pwd) {
		vTea.push_back(t);
	}
	ifs.close();

}

//����ظ����˺�
bool Manager::checkRepeat(int id, int type) {

	if (type == 1) {

		//ѧ���˺ż��
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++){
			if (id == it->Id)
				return true;
		}
	}
	else if (type == 2) {

		//��ʦ�˺ż��
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++) {
			if (id == it->empId)
				return true;
		}
	}

	return false;
}

//�鿴�����˺�
void printStudent(Student &s) {
	cout << "ѧ�ţ�" << s.Id << "����:" << s.Name << endl;
}
void printTeacher(Teacher& t) {
	cout << "���ţ�" << t.empId << "������" << t.Name << endl;
}
void Manager::showAllPerson() {

	//��ʾ��Ϣ
	cout << "��ѡ��鿴�˻����ͣ�" << endl;
	cout << "1��ѧ���˻�" << endl;
	cout << "2����ʦ�˻�" << endl;
	
	//�����û�ѡ��
	int select = 0;
	cin >> select;
	if (select == 1) {

		//ѧ��
		cout << "ѧ����Ϣչʾ��" << endl;
		for_each(vStu.begin(), vStu.end(),printStudent);
	}
	else if (select == 2) {

		//��ʦ
		cout << "��ʦ��Ϣչʾ��" << endl;
		for_each(vTea.begin(), vTea.end(),printTeacher);
	}
	else {
		cout << "ѡ����������³���" << endl;
		return;
	}
}

// �鿴������Ϣ
void Manager::showAllRoom() {

	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++) {
		cout << "������ţ�" << it->m_roomId << "����������" << it->m_Num << endl;
	}
	system("pause");
	system("cls");
}

// ���ԤԼ
void Manager::cleanFile() {
	   
	bool flag = checkId();
	if (flag) {
		ofstream ofs(ORDER_FILE, ios::trunc);
		ofs.close();
		cout << "��ճɹ�" << endl;
	}
	else {
		cout << "����Ա���������֤ʧ��" << endl;
	}
	
	system("pause");
	system("cls");
}