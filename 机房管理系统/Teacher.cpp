#include "Teacher.h"

// 默认构造函数
Teacher::Teacher() {

}

// 有参构造
Teacher::Teacher(int empId, string name, int pwd) {

	this->Name = name; // 设置姓名
	this->Pwd = pwd;   // 设置密码
	this->empId = empId; // 设置工号
}

// 操作菜单
void Teacher::operMenu() {

}

// 查看所有预约
void Teacher::showAllOrder() {

}

//审核预约
void Teacher::validOrder() {

}