#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

//经理类
class Manager : public Worker {
public:
	//构造函数
	Manager(int id, string name, int Did);

	//展示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();
};
