#include <iostream>
#include "SpeechManager.h"
#include "speaker.h"
#include <string>
using namespace std;

// �ݽ����̹���ϵͳ
int main() {

	// �����ݽ��������
	SpeechManager manager;

	// ��ʼ���ݽ���Ϣ
	/*for(map<int, speaker>::iterator it = manager.info.begin(); it != manager.info.end(); ++it) {
		cout << "ѡ�ֱ��: " << it->first 
			<< "\tѡ������: " << it->second.Name
			<<"\tѡ�ֳɼ�" << it->second.Score[0] << endl;
	}*/

	// ��ʾ�˵�
	manager.showMenu();

	//����ѡ������
	int choice = 0;
	while (true) {
		cout << "����������ѡ��: ";
		cin >> choice;
		switch (choice) {
		case 1:
			//��ʼ����
			manager.startSpeech();
			break;
		case 2:
			//�鿴�����¼
			break;
		case 3:
			//��ռ�¼
			break;
		case 0:
			//�˳�ϵͳ
			manager.exitSystem();
		default:
			system("cls");
			break;
		}
	}

	// ��������ʵ��...
	return 0;
}