#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

class Teacher : public Identity {
public:
	// 默认构造函数
	Teacher();
	
	// 有参构造
	Teacher(int empId, string name, string pwd);
	
	// 操作菜单
	virtual void operMenu(); // 纯虚函数，操作菜单
	
	// 查看所有预约
	void showAllOrder();

	//审核预约
	void validOrder();
	
	// 教师工号
	int empId; // 工号
};