#include "SpeechManager.h"
#include <algorithm>
#include <deque>

//���캯��
SpeechManager::SpeechManager() {

	//��ʼ��������Ϣ
	this->initSpeech();  //��ʼ���ݽ���Ϣ
	this->createSpeaker();  //����ѡ����Ϣ
}

//��������
SpeechManager::~SpeechManager() {
	//cout << "�ݽ�����ϵͳ�ѹر�" << endl;
}

//��ʾ�˵�
void SpeechManager::showMenu() {
	cout << "\t��ӭʹ���ݽ�����ϵͳ" << endl;
	cout << "\t1. ��ʼ����" << endl;
	cout << "\t2. �鿴�����¼" << endl;
	cout << "\t3. ��ռ�¼" << endl;
	cout << "\t0. �˳�ϵͳ" << endl;
}

//��ʼ����Ϣ
void SpeechManager::initSpeech() {

	// ��������߼�ʵ��
	this->v1.clear();  //��յ�һ��ѡ�ֱ��
	this->v2.clear();  //��յڶ���ѡ�ֱ��
	this->vectory.clear();  //��ս���ѡ�ֱ��
	this->info.clear();  //���ѡ����Ϣ
	//��¼�����ִ�
	this->Index = 1;

}

//����ѡ����Ϣ
void SpeechManager::createSpeaker() {

	// ���崴��ѡ����Ϣ�߼�ʵ��
	string nameSeed = "ABCDEFGHIJKLMNOP"; //ѡ����������
	for (int i = 0; i < nameSeed.size(); i++) {
		string name = "ѡ��";
		name += nameSeed[i];  //����ѡ������
		
		//ѡ����Ϣ
		speaker sp;
		sp.Name = name;  //����ѡ������

		for (int j = 0; j<2; j++){
			sp.Score[j] = 0.0;  //��ʼ��ѡ�ֵ÷�

		}

		this -> v1.push_back(i);  //��ѡ�ֱ�Ŵ����һ��ѡ�ֱ������
		this->info.insert(make_pair(i, sp));  //��ѡ����Ϣ����ѡ����Ϣӳ��
	}
	
}

//��ǩ
void SpeechManager::speechDraw() {

	//���ݲ�ͬ�ִΣ����г�ǩ��ʽ�������ǩ˳��
	if(this->Index == 1) {
		cout << "��һ�ֳ�ǩ��ʼ..." << endl;
		random_shuffle(this->v1.begin(), this->v1.end());  //������ҵ�һ��ѡ�ֱ��
		for(vector<int>::iterator it = this->v1.begin(); it != this->v1.end(); it++) {
			this->info[*it].Score[0] = rand() % 101;  //�������ѡ�ֵ÷�
			cout << "ѡ�ֱ��: " << *it << "\tѡ������: " << this->info[*it].Name << endl;
		}
	} else if(this->Index == 2) {
		cout << "�ڶ��ֳ�ǩ��ʼ..." << endl;
		random_shuffle(this->v2.begin(), this->v2.end());  //������ҵڶ���ѡ�ֱ��
		for(vector<int>::iterator it = this->v2.begin(); it != this->v2.end(); it++) {
			this->info[*it].Score[1] = rand() % 101;  //�������ѡ�ֵ÷�
			cout << "ѡ�ֱ��: " << *it << "\tѡ������: " << this->info[*it].Name  << endl;
		}
	} 
	system("pause");  //��ͣ���ȴ��û�����
	cout << endl;
}

//����
void SpeechManager::speechContest() {

	//���ɶ�Ӧ���֣����֣�
	cout << "�ִΣ�" << this->Index << endl;	//�����ǰ�ִ�
	vector<int> Src;	//������ѡ������

	multimap<double, int, greater<double>> groupScore;	//6��һ������
	int num = 0;

	//����ͬ�ִ����ɶ�Ӧʹ�ö�Ӧ������
	if (this->Index == 1) {
		Src = v1;
	}
	else {
		Src = v2;
	}

	//����ѡ��
	for (vector<int>::iterator it = Src.begin(); it != Src.end(); it++) {

		num++;	//����ѡ������
		deque<double> d;
		//�������ɵĶ�Ӧ���֣������������γ���������
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << "";
			d.push_back(score);
		}

		//�����ų���߷ֺ���ͷ�
		sort(d.begin(), d.end(), greater<double>());	//����
		d.pop_back();
		d.pop_front();

		//���ɶ�Ӧ�ľ��֣��������֣�
		//double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = accumulate(d.begin(), d.end(), 0.0f) / (double)d.size();

		this->info[*it].Score[this->Index - 1] = avg;	//�������ַ�������

		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0) {
			cout << "��" << num / 6 << "��" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) {
				cout << "��ţ�" << it->second 
					 << " \t������" << this->info[it->second].Name
					 << " \t������" << this->info[it->second].Score[this->Index - 1] << endl;
			}
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++) {
				if (this->Index == 1) {
					v2.push_back((*it).second);
				}
				else {
					vectory.push_back((*it).second);
				}
			}
			groupScore.clear();
		}

	}

}

//��ʼ����
void SpeechManager::startSpeech() {

	cout << "��ʼ����..." << endl;
	// ��������߼�ʵ��
	// �������̣���һ�� -> �ڶ��� -> ����
	this->speechDraw();  //��ǩ	
	this->speechContest();  //����
	this->showScore();	//չʾ��Ϣ
	// ѡ�ֽ����߼����÷ּ����
	this->Index++;  //���ӱ����ִ�

}

//չʾ��������
void SpeechManager::showScore(){

	cout << "��" << this->Index << "�ִ�ѡ����Ϣ" << endl;

	vector<int> v;
	if (this->Index == 1) {
		v = v2;
	}
	else
		v = vectory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "��ţ�" << *it << " \t������" << this->info[*it].Name << " \t�÷֣�" << this->info[*it].Score[this->Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();

}

//�鿴�����¼
void SpeechManager::showRecord() {
	cout << "�鿴�����¼..." << endl;
	// ����鿴��¼�߼�ʵ��
}

//��ռ�¼
void SpeechManager::clearRecord() {
	cout << "��ռ�¼..." << endl;
	// ������ռ�¼�߼�ʵ��
}

//�˳�ϵͳ
void SpeechManager::exitSystem() {
	//system("pause");
	exit(0);
}