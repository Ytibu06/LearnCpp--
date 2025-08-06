#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
#include "globalFile.h"
#include <fstream>
using namespace std;

//学生菜单界面
void studentMenu(Identity*& student) {

	while (true) {

		//菜单调用
		student->operMenu();
		Student* stu = (Student*)student;

		//用户选择监听
		int select = 0;
		cin >> select;

		if (select == 1) {

			stu->applyOrder();
		}else if (select == 2) {

			stu->showMyOrder();
		}else if(select == 3) {

			stu->showAllOrder();
		}else if (select == 4) {

			stu->cancelOrder();
		}
		else if (select == 0) {
			delete student;
			system("pause");
			system("cls");
			return;
		}
		else {
			cout << "输入错误重新输入" << endl;
		}
	}
}

//教师菜单界面
void teacherMenu(Identity*& teacher){

	while (true) {

		//菜单调用
		teacher->operMenu();
		Teacher* tea = (Teacher*)teacher;

		//用户选择监听
		int select = 0;
		cin >> select;

		if (select == 1) {
			tea->showAllOrder();
		}
		else if (select == 2) {
			tea->validOrder();
		}
		else if (select == 0) {
			delete teacher;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
		else {
			cout << "输入错误重新输入" << endl;
		}
	}
}

//管理员菜单展示
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
			man->addPerson();
		}
		else if (select == 2) {
			//查看账号
			man->showAllPerson();
		}
		else if (select == 3) {
			//查看机房
			man->showAllRoom();
		}
		else if (select == 4) {
			//清空预约
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
	cout << "请输入密码：";
	cin >> password;
	system("cls");
	//信息验证
	if(type == 1) {

		//学生信息验证
		int fid;
		string fName;
		string fPassword;

		while (ifs >> fid && ifs >> fName && ifs >> fPassword) {
			if(fid == id && fName == name && fPassword == password) {

				person = new Student(id, name, password);
				studentMenu(person);
				break;
			}
		}
	} else if(type == 2) {

		//教师身份验证
		int fEmpId;
		string fName;
		string fPassword;

		while (ifs >> fEmpId && ifs >> fName && ifs >> fPassword) {

			if (fEmpId == id && fName == name && fPassword == password) {
				person = new Teacher(id, name, password);
				teacherMenu(person);
				break;
			}
		}
		
	} else if(type == 3) {
		
		//管理员身份验证
		string fName;
		string fPassword;

		while (ifs >> fName && ifs >> fPassword) {
			if (fName == name && fPassword == password) {
				cout << "！！！ 管理员登陆 ！！！" << endl;
				person = new Manager(name, password);
				managerMenu(person);
				break;
			}
			else {
				cout << "管理员登陆失败，强制返回上一级！！！" << endl;
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