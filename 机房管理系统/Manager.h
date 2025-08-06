#pragma once
#include <iostream>
#include <fstream>
#include "globalFile.h"
#include "Identity.h"
#include "Student.h"
#include "Teacher.h"
#include "Student.h"
#include "computerRoom.h"
#include <vector>
#include <algorithm>
using namespace std;

class Manager : public Identity {
public:
	// 默认构造函数
	Manager();

	// 有参构造
	Manager(string name, string pwd);

	//身份验证器
	virtual bool checkId();

	// 操作菜单
	virtual void operMenu(); // 纯虚函数，操作菜单

	//添加账号
	void addPerson();

	//检测重复账号
	bool checkRepeat(int id, int type);

	//查看所有账号
	void showAllPerson();

	// 查看机房信息
	void showAllRoom();

	// 清空预约
	void cleanFile();

	//初始化人员信息容器
	void initVector();

	//学生容器
	vector<Student> vStu;
	//教师容器
	vector<Teacher> vTea;
	//机房容器
	vector<ComputerRoom> vCom;
	
};
