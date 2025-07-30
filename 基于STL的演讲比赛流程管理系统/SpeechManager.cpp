#include "SpeechManager.h"

//构造函数
SpeechManager::SpeechManager() {
	cout << "演讲管理系统已启动" << endl;
}

//析构函数
SpeechManager::~SpeechManager() {
	cout << "演讲管理系统已关闭" << endl;
}

//显示菜单
void SpeechManager::showMenu() {
	cout << "欢迎使用演讲管理系统" << endl;
	cout << "1. 添加演讲者" << endl;
	cout << "2. 删除演讲者" << endl;
	cout << "3. 修改演讲者信息" << endl;
	cout << "4. 显示所有演讲者" << endl;
	cout << "5. 查找演讲者" << endl;
	cout << "6. 退出系统" << endl;
}