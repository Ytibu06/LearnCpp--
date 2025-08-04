#include <iostream>
using namespace std;

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
				cout << "你选择了选项1" << endl;
				break;
			case 2:
				//教师身份
				cout << "你选择了选项2" << endl;
				break;
			case 3:
				//管理员身份
				cout << "你选择了选项3" << endl;
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