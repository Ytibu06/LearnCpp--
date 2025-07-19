#include "boss.h"

//构造函数
Boss::Boss(int id, string name, int Did) {
	this->Id = id;
	this->Name = name;
	this->DeptId = Did;
}

//展示个人信息
void Boss::showInfo() {
	cout << "职工编号：" << this->Id
		<< "\t职工姓名：" << this->Name
		<< "\t岗位名称：" << this->getDeptName()
		<< "\t岗位职责：完成任务" << endl;
}

//获取岗位名称
string Boss::getDeptName() {
	return string("老板");
}