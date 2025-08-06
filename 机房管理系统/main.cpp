#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
#include "globalFile.h"
#include <fstream>
using namespace std;

//ѧ���˵�����
void studentMenu(Identity*& student) {

	while (true) {

		//�˵�����
		student->operMenu();
		Student* stu = (Student*)student;

		//�û�ѡ�����
		int select = 0;
		cin >> select;

		if (select == 1) {

			stu->applyOrder();
		}else if (select == 2) {

			stu->showMyOrder();
		}else if(select == 3) {

			stu->showAllOrder();
		}else if (select == 4) {

			stu->cancelOrder();
		}
		else if (select == 0) {
			delete student;
			system("pause");
			system("cls");
			return;
		}
		else {
			cout << "���������������" << endl;
		}
	}
}

//��ʦ�˵�����
void teacherMenu(Identity*& teacher){

	while (true) {

		//�˵�����
		teacher->operMenu();
		Teacher* tea = (Teacher*)teacher;

		//�û�ѡ�����
		int select = 0;
		cin >> select;

		if (select == 1) {
			tea->showAllOrder();
		}
		else if (select == 2) {
			tea->validOrder();
		}
		else if (select == 0) {
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
		else {
			cout << "���������������" << endl;
		}
	}
}

//����Ա�˵�չʾ
void managerMenu(Identity*& manager) {

	while (true) {

		manager->operMenu();

		//�����������ӿ��еĳ�Ա����
		Manager* man = (Manager*)manager;

		//�����û�ѡ��
		int select = 0;
		cin >> select;
		if (select == 1) {
			//����˺�
			man->addPerson();
		}
		else if (select == 2) {
			//�鿴�˺�
			man->showAllPerson();
		}
		else if (select == 3) {
			//�鿴����
			man->showAllRoom();
		}
		else if (select == 4) {
			//���ԤԼ
			man->cleanFile();
		}
		else {

			//�˺�ע��
			delete manager;	//��ն����ڴ�
			cout << "�������˺�ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;

		}

	}
}

//��½����
void loginIn(string fileName, int type) {
	
	Identity  * person = NULL;

	//�����ļ�����
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		return;
	}

	//��ȡ�û���������
	int id;
	string name;
	string password;

	//��ʾ�û�������Ϣ
	if(type == 1) {
		cout << "������ѧ�ţ�" << endl;
		cin >> id;
	} else if(type == 2) {
		cout << "�����빤�ţ�" << endl;
		cin >> id;
	}
	cout << "�������û�����";
	cin >> name;
	cout << "���������룺";
	cin >> password;
	system("cls");
	//��Ϣ��֤
	if(type == 1) {

		//ѧ����Ϣ��֤
		int fid;
		string fName;
		string fPassword;

		while (ifs >> fid && ifs >> fName && ifs >> fPassword) {
			if(fid == id && fName == name && fPassword == password) {

				person = new Student(id, name, password);
				studentMenu(person);
				break;
			}
		}
	} else if(type == 2) {

		//��ʦ�����֤
		int fEmpId;
		string fName;
		string fPassword;

		while (ifs >> fEmpId && ifs >> fName && ifs >> fPassword) {

			if (fEmpId == id && fName == name && fPassword == password) {
				person = new Teacher(id, name, password);
				teacherMenu(person);
				break;
			}
		}
		
	} else if(type == 3) {
		
		//����Ա�����֤
		string fName;
		string fPassword;

		while (ifs >> fName && ifs >> fPassword) {
			if (fName == name && fPassword == password) {
				cout << "������ ����Ա��½ ������" << endl;
				person = new Manager(name, password);
				managerMenu(person);
				break;
			}
			else {
				cout << "����Ա��½ʧ�ܣ�ǿ�Ʒ�����һ��������" << endl;
				return;
			}
		}
	}

}


int main() {

	//����û�ѡ��
	int choice;
	while (true) {
		
		cout << " ---------------------- " << endl;
		cout << "|   ��ӭʹ�ù���ϵͳ   |" << endl;
		cout << "|    1. ѧ�����       |" << endl;
		cout << "|    2. ��ʦ���       |" << endl;
		cout << "|    3. ����Ա���     |" << endl;
		cout << "|    0. �˳�ϵͳ       |" << endl;
		cout << " ---------------------- " << endl;
		cout << "��ѡ�����ѡ�" << endl;
		cin >> choice;
		switch(choice) {
			case 1:
				//ѧ�����
				loginIn(STUDENT_FILE, 1);
				break;
			case 2:
				//��ʦ���
				loginIn(TEACHER_FILE, 2);
				break;
			case 3:
				//����Ա���
				loginIn(ADMIN_FILE, 3);
				break;
			case 0:
				//�˳�ϵͳ
				cout << "�˳�ϵͳ" << endl;
				system("pause");
				return 0;
			default:
				cout << "��Ч��ѡ�������ѡ��" << endl;
				system("pause");
				system("cls");
			break;	
		}
	}
	return 0;
}