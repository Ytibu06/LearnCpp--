#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Manager : public Identity {
public:
	// 默认构造函数
	Manager();

	// 有参构造
	Manager(string name, int pwd);

	// 操作菜单
	virtual void operMenu() = 0; // 纯虚函数，操作菜单

	//添加账号
	void addPerson();

	//查看所有账号
	void showAllPerson();

	// 查看机房信息
	void showAllRoom();

	// 清空预约
	void cleanFile();

	
};
