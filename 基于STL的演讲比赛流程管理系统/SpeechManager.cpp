#include "SpeechManager.h"

//���캯��
SpeechManager::SpeechManager() {
	cout << "�ݽ�����ϵͳ������" << endl;
}

//��������
SpeechManager::~SpeechManager() {
	cout << "�ݽ�����ϵͳ�ѹر�" << endl;
}

//��ʾ�˵�
void SpeechManager::showMenu() {
	cout << "��ӭʹ���ݽ�����ϵͳ" << endl;
	cout << "1. ����ݽ���" << endl;
	cout << "2. ɾ���ݽ���" << endl;
	cout << "3. �޸��ݽ�����Ϣ" << endl;
	cout << "4. ��ʾ�����ݽ���" << endl;
	cout << "5. �����ݽ���" << endl;
	cout << "6. �˳�ϵͳ" << endl;
}