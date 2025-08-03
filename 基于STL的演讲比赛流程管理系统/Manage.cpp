#include <iostream>
#include "SpeechManager.h"
#include "speaker.h"
#include <string>
using namespace std;

// 演讲流程管理系统
int main() {

	// 创建演讲管理对象
	SpeechManager manager;

	// 初始化演讲信息
	/*for(map<int, speaker>::iterator it = manager.info.begin(); it != manager.info.end(); ++it) {
		cout << "选手编号: " << it->first 
			<< "\t选手姓名: " << it->second.Name
			<<"\t选手成绩" << it->second.Score[0] << endl;
	}*/

	// 显示菜单
	manager.showMenu();

	//功能选择器：
	int choice = 0;
	while (true) {
		cout << "请输入您的选择: ";
		cin >> choice;
		switch (choice) {
		case 1:
			//开始比赛
			manager.startSpeech();
			break;
		case 2:
			//查看往届记录
			break;
		case 3:
			//清空记录
			break;
		case 0:
			//退出系统
			manager.exitSystem();
		default:
			system("cls");
			break;
		}
	}

	// 其他功能实现...
	return 0;
}