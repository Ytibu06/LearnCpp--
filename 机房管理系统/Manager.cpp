#include "Manager.h"

// Ĭ�Ϲ��캯��
Manager::Manager() {

}

// �вι���
Manager::Manager(string Name, string Pwd) {

	//��ֵ������Ϣ
	this->Name = Name;
	this->Pwd = Pwd;

	//��ʼ������
	this->initVector();

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
	ofstream ofs;
	
	//�����û�ѡ��
	int select = 0;
	cin >> select;
	if (select == 1) {

		fileName = STUDENT_FILE;
		tip = "����ѧ��ѧ��";
	}
	else if (select == 2) {

		fileName = TEACHER_FILE;
		tip = "�����ʦ����";
	}

	ofs.open(fileName, ios::out | ios::app);
	int id;
	string name;
	string pwd;
	
	cout << tip << endl;
	cin >> id;
	cout << "��������" << endl;
	cin >> name;
	cout << "�����˺�����" << endl;
	cin >> pwd;

	ofs << id << " " << name << " " << pwd  << endl;

	system("pause");
	system("cls");

	ofs.close();
	
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

//�鿴�����˺�
void Manager::showAllPerson() {

}

// �鿴������Ϣ
void Manager::showAllRoom() {

}

// ���ԤԼ
void Manager::cleanFile() {
	   
}