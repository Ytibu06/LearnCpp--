#include <iostream>
#include "manager.h"

//构造函数
Manager::Manager(int id, string name, int Did) {
	this->Id = id;
	this->Name = name;
	this->DeptId = Did;
}

//展示个人信息
void Manager::showInfo() {
	cout << "职工编号：" << this->Id
		<< "\t职工姓名：" << this->Name
		<< "\t岗位名称：" << this->getDeptName()
		<< "\t岗位职责：完成Boss交代的任务" << endl;
}

//获取岗位名称
string Manager::getDeptName() {
	return string("经理");
}