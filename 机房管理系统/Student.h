#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

//学生类
class Student : public Identity {
public:
	// 默认构造函数
	Student();

	//有参构造
	Student(int id, string name, string pwd);

	//操作菜单
	virtual void operMenu(); // 纯虚函数，操作菜单

	//申请预约
	void applyOrder();

	//查看自身预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//学生学号
	int Id; // 学号
};