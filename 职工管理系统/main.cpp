#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

int main() {

	//ʵ��WorkerManager������;
	WorkerManager workerManager;
		
	int choice = 0;	//�洢�û�ѡ��

	while (true) {
		//����չʾ�˵���Ա����
		workerManager.Show_Menu();

		//�����û�ѡ��
		cout << "����ѡ��" << endl;			
		cin >> choice;
		switch (choice) {
		case 0:	//�˳�ϵͳ
			workerManager.ExitSystem();
			break;
		case 1:	//����
			workerManager.Add_Emp();
			break;
		case 2:	//��ʾ
			workerManager.Show_Emp();
			break;
		case 3:	//ɾ��
			workerManager.Del_Emp();
			break;
		case 4:	//�޸�
			workerManager.Mod_Emp();
			break;
		case 5:	//����
			workerManager.Find_Emp();
			break;
		case 6:	//����
			workerManager.Sort_Emp();
			break;
		case 7:	//����ĵ�
			workerManager.Clean_File();
			break;
		default:
			system("cls");	//�����ʾ
			break;
		}
	}
	return 0;
}