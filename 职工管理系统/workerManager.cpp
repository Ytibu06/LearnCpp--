#include "workerManager.h"


//WorkerManager对象成员函数的实现

WorkerManager::WorkerManager() {

	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//文件不存在
	if (!ifs.is_open()) {
		//cout << "文件不存在" << endl;

		//初始化属性
		this->EmpNum = 0;
		this->EmpArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//cout << "文件为空" << endl;
		//初始化属性
		this->EmpNum = 0;
		this->EmpArray = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在，开始记录
	int num = this->getEmpNum();
	
	this->EmpNum = num;
	//开辟空间
	this->EmpArray = new Worker * [this->EmpNum];
	//将文件中读取的数据存入到员工指针数组中
	this->init_Emp();

	//测试输出
	//cout << "职工人数为：" << num << endl;
	//输出所有职工信息
	/*for (int i = 0; i < this->EmpNum; i++){
		cout << "员工编号:  " << this->EmpArray[i]->Id
			<< "\t姓名:  " << this->EmpArray[i]->Name
			<< "\t部门编号:  " << this->EmpArray[i]->DeptId << endl;
	}*/

}

//展示菜单
void WorkerManager::Show_Menu() {
	cout << "******************************************************" << endl;
	cout << "************     欢迎使用职工管理系统     ************" << endl;
	cout << "*****************   0.退出管理系统   *****************" << endl;
	cout << "*****************   1.增加员工信息   *****************" << endl;
	cout << "*****************   2.显示职工信息   *****************" << endl;
	cout << "*****************   3.删除离职员工   *****************" << endl;
	cout << "*****************   4.修改职工信息   *****************" << endl;
	cout << "*****************   5.查找职工信息   *****************" << endl;
	cout << "*****************   6.按照编号排序   *****************" << endl;
	cout << "*****************   7.清空所有文档   *****************" << endl;
	cout << "******************************************************" << endl;
	cout << endl;
}

//退出接口
void WorkerManager::ExitSystem() {
	cout << "欢迎再次使用" << endl;

	exit(0);	//退出程序
}

//添加职工函数
void WorkerManager::Add_Emp() {
	cout << "输入添加职工数量：" << endl;
	int addNum = 0;	//记录用户添加职工数量
	cin >> addNum;
	if (addNum > 0) {
		//添加功能
		int newSize = this->EmpNum + addNum;

		//开辟新空间
		Worker** newSpace = new Worker*[newSize];

		//原有空间数据拷贝到新空间中
		if (this->EmpArray != NULL) {
			for (int i = 0; i < this->EmpNum; i++) {
				newSpace[i] = this->EmpArray[i];
			}
		}
		//添加新数据
		for (int i = 0; i < addNum; i++){
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工的编号" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工的姓名" << endl;
			cin >> name;
			cout << "输入职位选择" << endl;
			cout << "1.职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
					break;
			}
			//将创建职工职责，保存到数组中
			//newSpace[this->EmpNum + i] = worker;
			// 修改后（安全）
			if (worker) {
				int index = this->EmpNum + i;
				if (index < newSize) {
					newSpace[index] = worker; // 存储指针（8字节）
				}
				else {
					// 处理越界
					std::cerr << "错误：数组索引越界! 索引: "
						<< index << "/" << newSize - 1 << std::endl;
					delete worker;
					addNum--;  // 调整计数
					i--;       // 重试当前索引
				}
			}
		}
		//释放原有空间
		delete[] this->EmpArray;
		//更改新空间的指向
		this->EmpArray = newSpace;
		//更新职工人数
		this->EmpNum = newSize;
		//保存进文件
		this->save();
		//提示成功
		cout << "成功添加"<<addNum<<"名新职工" << endl;
		//设置职工信息文件内容
		this->FileIsEmpty = false;
	}
	else {
		cout << "输入错误" << endl;
	}

	system("pause");
	system("cls");
}

//职工信息保存进文件
void WorkerManager::save() {

	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	//每个职员信息写入文件
	for (int i = 0; i < this->EmpNum; i++){
		ofs << this->EmpArray[i]->Id << "  "
			<< this->EmpArray[i]->Name << "  "
			<< this->EmpArray[i]->DeptId << endl;
	}
	ofs.close();
}

//统计文件中职员人数
int WorkerManager::getEmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	//初始化人数
	int num = 0;
	while( ifs >> id && ifs >> name && ifs >> did ){
		//统计人数
		num++;
	}
	return num;
}

//初始化职工信息
void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		Worker* worker = NULL;
		if (did == 1) {
			worker = new Employee(id, name, did);
		}
		else if (did == 2) {
			worker = new Manager(id, name, did);
		}
		else if (did == 3) {
			worker = new Boss(id, name, did);
		}
		else {
			cout << "输入错误信息" << endl;
		}
		this->EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

//展示职工信息
void WorkerManager::Show_Emp() {
	//判断文件是否为空
	if (this->FileIsEmpty) {
		cout << "文件不存在记录" << endl;
	}
	else {
		for (int i = 0; i < EmpNum; i++) {
			//利用多态掉调用程序接口
			this->EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//删除员工信息
void WorkerManager::Del_Emp() {
	if (this->FileIsEmpty) {
		cout << "职工文件不存在记录" << endl;
	}
	else {
		cout << "输入删除职工编号" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1) {
			for (int i = 0; i < this->EmpNum - 1; i++) {
				this->EmpArray[i] = this->EmpArray[i + 1];
			}
			cout << "该职工信息已删除" << endl;
			//更新人员个数
			this->EmpNum--;
			//更新数据同步于文件中
			this->save();
		}
		else {
			cout << "该职工信息不存在" << endl;
		}
	}
	system("pause");
	system("cls");
}

//判断职工是否存在，返回职工所在位置
int WorkerManager::IsExist(int id) {
	int index = -1; // 默认不存在

	for (int i = 0; i < this->EmpNum; i++){
		if (this->EmpArray[i]->Id == id) {
			index = i; // 找到职工，记录位置
			break; // 找到后退出循环
		}
	}
	return index; // 返回职工位置，如果不存在则返回-1
}

//修改职工信息
void WorkerManager::Mod_Emp() {
	if( this->FileIsEmpty){
		cout << "职员信息文件不存在" << endl;
	}
	else {
		cout << "输入修改职员的编号" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1) {
			//查找编号的员工
			delete this->EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到：" << id << "号职员，输入新职工号：" << endl;
			cin >> newId;
			cout << "输入姓名" << endl;
			cin >> newName;
			cout << "输入岗位: " << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理    " << endl;
			cout << "2.老板    " << endl;

			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				cout << "输入有误" << endl;
				break;
			}
			//更新数据进数组中
			this->EmpArray[ret] = worker;
			cout << "修改成功" << endl;
			//更新文件
			this->save();
		}
		else {
			cout << "修改失败，不存在信息" << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找职工信息
void WorkerManager::Find_Emp() {
	if (this->FileIsEmpty) {
		cout << "不存在记录信息的文件" << endl;
	}
	else {
		cout << "请输入查找方式：" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按职工姓名查找" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) {
			cout << "开始按照职工编号查找：" << endl;
			cout << "请输入职工编号：" << endl;
			int id = 0;
			cin >> id;
			int ret = this->IsExist(id);
			if ( ret != -1) {
				cout << "职员信息如下：" << endl;
				this->EmpArray[ret]->showInfo();
			}
			else {
				cout << "不存在此员工信息" << endl;
			}
			
		}
		else if (select == 2) {
			cout << "开始按照职工姓名查找：" << endl;
			cout << "请输入职工姓名：" << endl;
			string name = "";
			cin >> name;

			bool flag = false;
			for (int i = 0; i < this->EmpNum; i++){
				if (name == this->EmpArray[i]->Name) {
					cout << "检测到的信息为：" << endl;
					this->EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false) {
				cout << "不存在此信息" << endl;
			}

		}
		else {
			cout << "输入有误" << endl;
		}
	}
	system("pause");
	system("cls");
}

//职员信息排序
void WorkerManager::Sort_Emp() {
	if (this->FileIsEmpty) {
		cout << "职员信息文件不存在" << endl;
		system("pause");
		system("cls");
	}
	else 
	{
		cout << "请选择排序方式：" << endl;
		cout << "1.按照职工编号升序" << endl;
		cout << "2.按照职工编号降序" << endl;

		int select = 0;
		cin >> select;
		if (select == 1) {
			for (int i = 0; i < this->EmpNum; i++)
			{
				for (int j = 0; j < this->EmpNum - i - 1; j++)
				{
					if (this->EmpArray[j]->Id > this->EmpArray[j + 1]->Id)
					{
						//交换指针
						Worker* temp = this->EmpArray[j];
						this->EmpArray[j] = this->EmpArray[j + 1];
						this->EmpArray[j + 1] = temp;
					}
				}
			}
			cout << "职工信息按照编号升序排列" << endl;
		}else if(select == 2) {
			for (int i = 0; i < this->EmpNum; i++)
			{
				for (int j = 0; j < this->EmpNum - i - 1; j++)
				{
					if (this->EmpArray[j]->Id < this->EmpArray[j + 1]->Id)
					{
						//交换指针
						Worker* temp = this->EmpArray[j];
						this->EmpArray[j] = this->EmpArray[j + 1];
						this->EmpArray[j + 1] = temp;
					}
				}
			}
			cout << "职工信息按照编号降序排列" << endl;
		}
		else {
			cout << "输入有误" << endl;

		}
		this->save(); // 保存排序后的数据到文件
		this->Show_Emp();
	}
}

//清空文件
void WorkerManager::Clean_File() {
	cout << "确认清空文件吗？" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;
	int select = 0;
	cin >> select;
	if(select == 1) {
		ofstream ofs(FILENAME, ios::trunc); // 清空文件
		if (ofs.is_open()) {
			ofs.close();
			cout << "文件已清空" << endl;
			// 重置职工信息
			this->EmpNum = 0;
			delete[] this->EmpArray;
			this->EmpArray = NULL;
			this->FileIsEmpty = true;
		} else {
			cout << "清空文件失败" << endl;
		}
	} else {
		cout << "取消清空文件" << endl;
	}
}

WorkerManager::~WorkerManager() {
	if (this->EmpArray != NULL) {
		delete[] this->EmpArray;
		this->EmpArray = NULL;
	}
}