#include <iostream>
#include <fstream>
using namespace std;
//二进制文件的读取操作
class Person {
public:
	char Name[64];
	int Age;
};
void test() {
	//包含头文件

	//创建流对象
	ifstream ifs;

	//判断文件的打开
	ifs.open("Person.txt", ios::in | ios::binary);
	if(!ifs.is_open()){
		cout << "打开失败" << endl;
		return;
	}

	//读取文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.Name << "  年龄：" << p.Age << endl;

	//关闭文件
	ifs.close();
}

int main() {
	test();
	return 0;
}