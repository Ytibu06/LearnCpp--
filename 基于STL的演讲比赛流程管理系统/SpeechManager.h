#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <functional>
#include <numeric>
#include <algorithm>
#include <deque>
#include <string>
#include <fstream>
#include "speaker.h"
using namespace std;

//演讲管理类

class SpeechManager {
public:

	vector<int> v1;  //存储第一轮次选手编号
	vector<int> v2;	//存储第二轮次选手编号
	vector<int> vectory;  //存储晋级选手编号
	map<int, speaker> info;  //存储选手信息，key为选手编号，value为选手对象
	int Index;  //记录比赛轮次
	map<int, vector<string>> Record;  //存储比赛记录，key为轮次，value为选手信息
	bool fileIsEmpty;  //记录文件是否为空

	//构造函数
	SpeechManager();

	//析构函数
	~SpeechManager();

	//显示菜单
	void showMenu();

	//初始化比赛信息
	void initSpeech();

	//创建选手信息
	void createSpeaker();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//开始比赛
	void startSpeech();

	//查看比赛分数
	void showScore();

	//保存比赛记录
	void saveRecord();

	//查看往届记录
	void showRecord();

	//清空记录
	void clearRecord();

	//退出系统
	void exitSystem();

	
};