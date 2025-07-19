#include <iostream>
#include <fstream>
using namespace std;

/*
class Person {
public:
	char name[64];
	int age;
};

void  test() {
	//包含头文件

	//创建流对象
	ofstream ofs("Person.txt", ios::out | ios::binary);

	//打开文件
	//ofs.open("test.txt", ios::out | ios::binary);

	//写文件
	Person p = { "张三",18 };
	ofs.write( (const char*)&p ,sizeof(Person));

	//关闭文件
	ofs.close();
}
int main() {
	test();
	return 0;   
}
*/