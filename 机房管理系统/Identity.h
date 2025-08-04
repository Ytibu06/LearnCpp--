#pragma once

#include <iostream>
using namespace std;

class Identity {
public:

	virtual void operMenu() = 0; // 纯虚函数，操作菜单
	string Name; // 姓名
	int Pwd; // 密码
};