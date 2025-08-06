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

	//Ĭ�Ϲ��캯��
	OrderFile();

	//����ԤԼ��¼
	void updateOrder();

	

	//ԤԼ��¼��
	int m_Size;

	//ԤԼ��Ϣ
	map<int,map<string, string>> m_orderData;
};
