#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <functional>
#include <numeric>
#include "speaker.h"
using namespace std;

//�ݽ�������

class SpeechManager {
public:

	vector<int> v1;  //�洢��һ�ִ�ѡ�ֱ��
	vector<int> v2;	//�洢�ڶ��ִ�ѡ�ֱ��
	vector<int> vectory;  //�洢����ѡ�ֱ��
	map<int, speaker> info;  //�洢ѡ����Ϣ��keyΪѡ�ֱ�ţ�valueΪѡ�ֶ���
	int Index;  //��¼�����ִ�

	//���캯��
	SpeechManager();

	//��������
	~SpeechManager();

	//��ʾ�˵�
	void showMenu();

	//��ʼ��������Ϣ
	void initSpeech();

	//����ѡ����Ϣ
	void createSpeaker();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʼ����
	void startSpeech();

	//�鿴��������
	void showScore();

	//�鿴�����¼
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//�˳�ϵͳ
	void exitSystem();

	
};