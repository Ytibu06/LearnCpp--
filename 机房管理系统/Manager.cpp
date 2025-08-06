#include "Manager.h"

// 默认构造函数
Manager::Manager() {

}

// 有参构造
Manager::Manager(string Name, string Pwd) {

	//赋值基本信息
	this->Name = Name;
	this->Pwd = Pwd;

	//初始化账号信息容器
	this->initVector();

	//初始化机房信息容器
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_roomId && ifs >> com.m_Num) {
		vCom.push_back(com);
	}
	ifs.close();

}

//身份验证器
bool Manager::checkId() {

	//创建文件对象
	ifstream ifs;
	ifs.open(ADMIN_FILE, ios::in);
	
	string fName;
	string fPassword;
	string name;
	string pwd;
	cout << "输入管理员账户：" << endl;
	cin >> name;
	cout << "输入管理员密码：" << endl;
	cin >> pwd;
	system("cls");

	while (ifs >> fName && ifs >> fPassword) {
		if (fName == name && fPassword == pwd) {
			ifs.close();
			return true;
		}
	}
	ifs.close();
	return false;

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
	string errorTip;
	ofstream ofs;
	
	//监听用户选择
	int select = 0;
	cin >> select;
	if (select == 1) {

		fileName = STUDENT_FILE;
		tip = "输入学生学号";
		errorTip = "学生学号重复，重新输入内容";
	}
	else if (select == 2) {

		fileName = TEACHER_FILE;
		tip = "输入教师工号";
		errorTip = "教师工号重复，重新输入内容";
	}
	else {
		cout << "输入错误，重新尝试" << endl;
		return;
	}

	ofs.open(fileName, ios::out | ios::app);
	int id;
	string name;
	string pwd;

	cout << tip << endl;

	while (true) {
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) {
			cout << errorTip << endl;
		}
		else
			break;
	}
	
	cout << "输入姓名" << endl;
	cin >> name;
	cout << "输入账号密码" << endl;
	cin >> pwd;

	ofs << id << " " << name << " " << pwd  << endl;

	system("pause");
	system("cls");

	ofs.close();

	this->initVector();
	
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

//检测重复的账号
bool Manager::checkRepeat(int id, int type) {

	if (type == 1) {

		//学生账号检测
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++){
			if (id == it->Id)
				return true;
		}
	}
	else if (type == 2) {

		//教师账号检测
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++) {
			if (id == it->empId)
				return true;
		}
	}

	return false;
}

//查看所有账号
void printStudent(Student &s) {
	cout << "学号：" << s.Id << "姓名:" << s.Name << endl;
}
void printTeacher(Teacher& t) {
	cout << "工号：" << t.empId << "姓名：" << t.Name << endl;
}
void Manager::showAllPerson() {

	//提示信息
	cout << "请选择查看账户类型：" << endl;
	cout << "1、学生账户" << endl;
	cout << "2、教师账户" << endl;
	
	//监听用户选择
	int select = 0;
	cin >> select;
	if (select == 1) {

		//学生
		cout << "学生信息展示：" << endl;
		for_each(vStu.begin(), vStu.end(),printStudent);
	}
	else if (select == 2) {

		//教师
		cout << "教师信息展示：" << endl;
		for_each(vTea.begin(), vTea.end(),printTeacher);
	}
	else {
		cout << "选择出错误，重新尝试" << endl;
		return;
	}
}

// 查看机房信息
void Manager::showAllRoom() {

	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++) {
		cout << "机房编号：" << it->m_roomId << "机房容量：" << it->m_Num << endl;
	}
	system("pause");
	system("cls");
}

// 清空预约
void Manager::cleanFile() {
	   
	bool flag = checkId();
	if (flag) {
		ofstream ofs(ORDER_FILE, ios::trunc);
		ofs.close();
		cout << "清空成功" << endl;
	}
	else {
		cout << "管理员二次身份验证失败" << endl;
	}
	
	system("pause");
	system("cls");
}