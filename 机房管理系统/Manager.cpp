#include "Manager.h"

// 默认构造函数
Manager::Manager() {

}

// 有参构造
Manager::Manager(string Name, string Pwd) {

	//赋值基本信息
	this->Name = Name;
	this->Pwd = Pwd;

	//初始化容器
	this->initVector();

}

// 操作菜单
void Manager::operMenu() {

	cout << "管理员账号开始登陆：" << this->Name << "登陆成功" << endl;
	cout << "\t  --------------------------\n";
	cout << "\t |       1、添加账号        |\n";
	cout << "\t |       2、查看账号        |\n";
	cout << "\t |       3、查看机房        |\n";
	cout << "\t |       4、清空预约        |\n";
	cout << "\t |       0、注销登录        |\n";
	cout << "\t  --------------------------\n";
	cout << "输入选择" << endl; 

}

//添加账号
void Manager::addPerson() {

	//信息提示
	cout << "选择添加账号类型" << endl;
	cout << "1、学生账户" << endl;
	cout << "2、教师账户" << endl;

	string fileName;
	string tip;
	ofstream ofs;
	
	//监听用户选择
	int select = 0;
	cin >> select;
	if (select == 1) {

		fileName = STUDENT_FILE;
		tip = "输入学生学号";
	}
	else if (select == 2) {

		fileName = TEACHER_FILE;
		tip = "输入教师工号";
	}

	ofs.open(fileName, ios::out | ios::app);
	int id;
	string name;
	string pwd;
	
	cout << tip << endl;
	cin >> id;
	cout << "输入姓名" << endl;
	cin >> name;
	cout << "输入账号密码" << endl;
	cin >> pwd;

	ofs << id << " " << name << " " << pwd  << endl;

	system("pause");
	system("cls");

	ofs.close();
	
}

//初始化人员信息容器
void Manager::initVector() {

	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "文件读取失败" << endl;
		return;
	}

	vStu.clear();
	vTea.clear();

	Student s;
	while (ifs >> s.Id && ifs >> s.Name && ifs >> s.Pwd) {
		vStu.push_back(s);
	}
	ifs.close();

	ifs.open(TEACHER_FILE, ios::in);
	/*if (!ifs.is_open()) {
		cout << "文件读取失败" << endl;
		return;
	}*/
	Teacher t;
	while (ifs >> t.empId && ifs >> t.Name && ifs >> t.Pwd) {
		vTea.push_back(t);
	}
	ifs.close();

}

//查看所有账号
void Manager::showAllPerson() {

}

// 查看机房信息
void Manager::showAllRoom() {

}

// 清空预约
void Manager::cleanFile() {
	   
}