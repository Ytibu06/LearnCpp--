#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

int main() {

	//实例WorkerManager化对象;
	WorkerManager workerManager;
		
	int choice = 0;	//存储用户选项

	while (true) {
		//调用展示菜单成员函数
		workerManager.Show_Menu();

		//监听用户选择
		cout << "输入选择：" << endl;			
		cin >> choice;
		switch (choice) {
		case 0:	//退出系统
			workerManager.ExitSystem();
			break;
		case 1:	//增加
			workerManager.Add_Emp();
			break;
		case 2:	//显示
			workerManager.Show_Emp();
			break;
		case 3:	//删除
			workerManager.Del_Emp();
			break;
		case 4:	//修改
			workerManager.Mod_Emp();
			break;
		case 5:	//查找
			workerManager.Find_Emp();
			break;
		case 6:	//排序
			workerManager.Sort_Emp();
			break;
		case 7:	//清空文档
			workerManager.Clean_File();
			break;
		default:
			system("cls");	//清除显示
			break;
		}
	}
	return 0;
}