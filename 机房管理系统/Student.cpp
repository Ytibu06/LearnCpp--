#include "Student.h"

// 默认构造函数
Student::Student() {

}
//有参构造
Student::Student(int id, string name, int pwd) {
	this->Name = name; // 设置姓名
	this->Pwd = pwd;   // 设置密码
	this->Id = id;     // 设置学号
}

//操作菜单
void Student::operMenu() {
	cout << "----------------------" << endl;
	cout << "|   欢迎使用学生系统   |" << endl;
	cout << "|    1. 申请预约       |" << endl;
	cout << "|    2. 查看我的预约   |" << endl;
	cout << "|    3. 查看所有预约   |" << endl;
	cout << "|    4. 取消预约       |" << endl;
	cout << "|    0. 退出系统       |" << endl;
	cout << "----------------------" << endl;
}

//申请预约
void Student::applyOrder() {

}

//查看自身预约
void Student::showMyOrder() {

}

//查看所有预约
void Student::showAllOrder() {

}

//取消预约
void Student::cancelOrder() {

}

//学生学号