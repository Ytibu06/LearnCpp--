#include <iostream>
#include <fstream>
using namespace std;
#include <string>

//void test() {
//	//包含头文件
//
//	//创建流对象
//	ifstream ifs;
//
//	//打开文件，判断是否打开
//	ifs.open("test.txt",ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	} 
//
//	//读取文件内容方式一：
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf <<endl;
//	}
//
//	//方式二：
//	/*char buff[1024] = { 0 };
//	while (ifs.getline(buff, sizeof(buff))) {
//		cout << buff << endl;
//	}*/
//
//	//方式三：
//	/*string bufff;
//	while (getline(ifs, bufff)) {
//		cout << bufff << endl;
//	}*/
//
//	//方式四：
//	/*char c;
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}*/
//
//	//关闭文件
//	ifs.close();
//}
//int main() {
//	test();
//	return 0;
//}