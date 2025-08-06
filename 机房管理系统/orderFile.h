#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "globalFile.h"
using namespace std;

class OrderFile {

public:
	void getInfo(string info, map<string, string>& m);

	//默认构造函数
	OrderFile();

	//更新预约记录
	void updateOrder();

	

	//预约记录数
	int m_Size;

	//预约信息
	map<int,map<string, string>> m_orderData;
};
