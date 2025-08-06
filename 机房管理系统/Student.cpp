#include "Student.h"

// 默认构造函数
Student::Student() {

}
//有参构造
Student::Student(int id, string name, string pwd) {

	this->Id = id;     // 设置学号
	this->Name = name; // 设置姓名
	this->Pwd = pwd;   // 设置密码

	//初始化机房信息容器
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_roomId && ifs >> com.m_Num) {
		vCom.push_back(com);
	}
	ifs.close();

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

	cout << "输入选择：" << endl;
}

//申请预约
void Student::applyOrder() {

	cout << "开放时间：周一至周五" << endl;
	cout << "请输入预约时间：" << endl;
	cout << "1、周一" << endl;
	cout << "2、周二" << endl;
	cout << "3、周三" << endl;
	cout << "4、周四" << endl;
	cout << "5、周五" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;
	while (true) {
		cin >> date;
		if (date >= 1 && date <= 5) {
			break;
		}
		cout << "输入错误，重新输入" << endl;

	}
	cout << "输入预约时间段：" << endl;
	cout << "1、上午" << endl;
	cout << "2、下午" << endl;

	while (true) {
		cin >> interval;
		if (interval >= 1 && interval <= 2) {
			break;
		}
		cout << "输入错误，重新输入" << endl;
	}

	cout << "选择机房：" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_roomId << "容量为：" << vCom[i].m_Num << endl;
	}
	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {
			break;
		}
		cout << "输入错误，重新输入" << endl;
	}
	cout << "预约成功，审核中！！！" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "date:" << date << " ";
	ofs << "interval:" << interval<< " ";
	ofs << "stuId:" << this->Id << " ";
	ofs << "stuName:" << this->Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();
	system("puase");
	system("cls");
	
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