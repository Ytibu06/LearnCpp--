#include <iostream>
using namespace std;

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
				cout << "��ѡ����ѡ��1" << endl;
				break;
			case 2:
				//��ʦ���
				cout << "��ѡ����ѡ��2" << endl;
				break;
			case 3:
				//����Ա���
				cout << "��ѡ����ѡ��3" << endl;
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