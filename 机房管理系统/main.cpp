#include <iostream>
using namespace std;
#include "Identity.h"
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
#include "globalFile.h"
#include <fstream>

//多态菜单展示
void managerMenu(Identity*& manager) {

	while (true) {

		manager->operMenu();

		//父类调用子类接口中的成员方法
		Manager* man = (Manager*)manager;

		//监听用户选择
		int select = 0;
		cin >> select;
		if (select == 1) {
			//添加账号
			cout << "添加账号" << endl;
			man->addPerson();
		}
		else if (select == 2) {
			//查看账号
			cout << "查看账号" << endl;
			man->showAllPerson();
		}
		else if (select == 3) {
			//查看机房
			cout << "查看机房" << endl;
			man->showAllRoom();
		}
		else if (select == 4) {
			//清空预约
			cout << "清空预约" << endl;
			man->cleanFile();
		}
		else {

			//账号注销
			delete manager;	//清空堆区内存
			cout << "！！！账号注销成功" << endl;
			system("pause");
			system("cls");
			return;

		}

	}
}

//登陆功能
void loginIn(string fileName, int type) {
	
	Identity  * person = NULL;

	//创建文件对象
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//判断文件是否存在
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		return;
	}

	//获取用户名和密码
	int id;
	string name;
	string password;

	//提示用户输入信息
	if(type == 1) {
		cout << "请输入学号：" << endl;
		cin >> id;
	} else if(type == 2) {
		cout << "请输入工号：" << endl;
		cin >> id;
	}
	cout << "请输入用户名：";
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> password;

	//信息验证
	if(type == 1) {

		//学生信息验证
		int fid;
		string fName;
		string fPassword;

		while (ifs >> fid && ifs >> fName && ifs >> fPassword) {
			if(fid == id && fName == name && fPassword == password) {
				cout << "登录成功" << endl;
				person = new Student(id, name, password);
				managerMenu(person);
				return;
			}
		}
	} else if(type == 2) {

		//教师身份验证
		int fEmpId;
		string fName;
		string fPassword;

		while (ifs >> fEmpId && ifs >> fName && ifs >> fPassword) {
			if (fEmpId == id && fName == name && fPassword == password) {
				cout << "登录成功" << endl;
				person = new Teacher(id, name, password);
				managerMenu(person);
				return;
			}
		}
		
	} else if(type == 3) {
		
		//管理员身份验证
		string fName;
		string fPassword;

		cout << "！！！！！！！！" << endl;
		while (ifs >> fName && ifs >> fPassword) {
			if (fName == name && fPassword == password) {
				cout << "！！！ 管理员登陆 ！！！" << endl;
				person = new Manager(name, password);
				managerMenu(person);
				return;
			}
			else {
				cout << "管理员登陆失败！！！" << endl;
				return;
			}
		}
	}

}


int main() {

	//监控用户选择
	int choice;
	while (true) {
		
		cout << " ---------------------- " << endl;
		cout << "|   欢迎使用管理系统   |" << endl;
		cout << "|    1. 学生身份       |" << endl;
		cout << "|    2. 教师身份       |" << endl;
		cout << "|    3. 管理员身份     |" << endl;
		cout << "|    0. 退出系统       |" << endl;
		cout << " ---------------------- " << endl;
		cout << "请选择你的选项：" << endl;
		cin >> choice;
		switch(choice) {
			case 1:
				//学生身份
				loginIn(STUDENT_FILE, 1);
				break;
			case 2:
				//教师身份
				loginIn(TEACHER_FILE, 2);
				break;
			case 3:
				//管理员身份
				loginIn(ADMIN_FILE, 3);
				break;
			case 0:
				//退出系统
				cout << "退出系统" << endl;
				system("pause");
				return 0;
			default:
				cout << "无效的选项，请重新选择：" << endl;
				system("pause");
				system("cls");
			break;	
		}
	}
	return 0;
}