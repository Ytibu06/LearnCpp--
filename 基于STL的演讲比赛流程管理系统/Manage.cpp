#include <iostream>
#include "SpeechManager.h"
using namespace std;

// 演讲流程管理系统

int main() {

	cout << "欢迎使用演讲流程管理系统" << endl;

	// 创建演讲管理对象
	SpeechManager manager;

	// 显示菜单
	manager.showMenu();

	// 其他功能实现...
	return 0;
}