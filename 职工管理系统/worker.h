#pragma once
#include <iostream>
#include <string>
using namespace std;

//职工抽象类
class Worker {
public:
	//职工编号
	int Id;
	//职工姓名
	string Name;
	//部门编号
	int DeptId;

	//展示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;
};
