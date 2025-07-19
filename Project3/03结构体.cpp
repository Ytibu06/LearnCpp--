#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	double score;
};

int main3() {

	//创建结构体变量
	struct Student s1 = { "张三", 20, 90.5 };
	//指针指向结构体
	Student* p = &s1;
	//指针访问结构体成员:指针->成员名
	cout << "姓名: " << p->name << ", 年龄: " << p->age << ", 分数: " << p->score << endl;


	system("pause");
	return 0;
}