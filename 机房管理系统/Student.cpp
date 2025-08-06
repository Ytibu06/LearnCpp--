#include "Student.h"
#include "orderFile.h"

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
	for (size_t i = 0; i < vCom.size(); i++)
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

	OrderFile of;
	if (of.m_Size == 0) {
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (size_t i = 0; i < of.m_Size; i++)
	{
		if (this->Id == atoi(of.m_orderData[i]["stuId"].c_str())) {
			cout << "预约日期：周" << of.m_orderData[i]["date"];
			cout << " 时间段：" << (of.m_orderData[i]["interval"] == "1"?"上午":"下午");
			cout << " 机房编号：" << of.m_orderData[i]["roomId"];
			string status = " 状态";
			if (of.m_orderData[i]["status"] == "1") {
				status += "审核中";
			}
			else if (of.m_orderData[i]["status"] == "2") {
				status += "预约成功";
			}
			else if (of.m_orderData[i]["status"] == "-1") {
				status += "预约失败";
			}
			else {
				status += "已取消";
			}
			cout << status << endl;
		}
		
	}
	system("pause");
	system("cls");
}

//查看所有预约
void Student::showAllOrder() {

	OrderFile of;

	//是否有记录判断
	if (of.m_Size == 0) {
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	//拼接输出信息
	for (size_t i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << endl;
		cout << "预约日期：周" << of.m_orderData[i]["date"];
		cout << " 时间段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
		cout << " 学号：" << of.m_orderData[i]["stuId"];
		cout << " 姓名：" << of.m_orderData[i]["stuName"];
		cout << " 机房编号：" << of.m_orderData[i]["roomId"];
		string status = " 状态";
		if (of.m_orderData[i]["status"] == "1") {
			status += "审核中";
		}
		else if (of.m_orderData[i]["status"] == "2") {
			status += "预约成功";
		}
		else if (of.m_orderData[i]["status"] == "-1") {
			status += "预约失败";
		}
		else {
			status += "已取消";
		}
		cout << status << endl;

	}

	system("pause");
	system("cls");

}

//取消预约
void Student::cancelOrder() {

	OrderFile of;

	//判断记录是否存在
	if (of.m_Size == 0) {
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "输入预约信息以取消预约" << endl;

	vector<int> v;

	//条件判断id对应的预约信息，将符合条件的信息放置于容器中
	int index = 1;
	for (int i = 0; i < of.m_Size; i++) {
		if (this->Id = atoi(of.m_orderData[i]["stuId"].c_str()))
		{
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2") {
				v.push_back(i);
				cout << index++ << "、";
				cout << " 预约日期：周" << of.m_orderData[i]["date"];
				cout << " 时间段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
				cout << " 机房编号：" << of.m_orderData[i]["roomId"];
				string status = " 状态";
				if (of.m_orderData[i]["status"] == "1") {
					status += "审核中";
				}
				else if (of.m_orderData[i]["status"] == "2") {
					status += "预约成功";
				}
				cout << status << endl;
			}
		}
	}

	//将符合条件的信息容器，遍历输出信息内容
	cout << "请输入取消的记录，0代表返回" << endl;

	int select = 0;
	while (true) {
		cin >> select;
		if (select >= 0 && select <= v.size()) {
			if (select == 0) {
				break;
			}
			else {
				of.m_orderData[v[select - 1]]["status"] = "0";
				of.updateOrder();
				cout << "取消成功" << endl;
				break;
			}
		}
		cout << "输入错误，重新输入" << endl;
	}
	system("pause");
	system("cls");

}