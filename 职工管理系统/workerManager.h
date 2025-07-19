#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;
#define FILENAME "empFile.txt"

//创建WorkerManager管理系统对象
class WorkerManager {
public:
	//职工人数
	int EmpNum;

	//职工数组指针
	Worker** EmpArray;

	//判断文件是否为空
	bool FileIsEmpty;

	//构造函数
	WorkerManager();

	//展示菜单函数
	void Show_Menu();

	//退出接口
	void ExitSystem();

	//增加员工
	void Add_Emp();

	//保存进文件
	void save();

	//统计文件中职员人数
	int getEmpNum();

	//初始化职工信息
	void init_Emp();

	//展示职工信息
	void Show_Emp();

	//删除员工信息
	void Del_Emp();

	//判断职工是否存在，返回职工所在位置
	int IsExist(int id);

	//修改职工信息
	void Mod_Emp();

	//查找职工信息
	void Find_Emp();

	//职员信息排序
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//析构函数
	~WorkerManager();
};