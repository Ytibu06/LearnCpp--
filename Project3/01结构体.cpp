#include <iostream>
using namespace std;

//结构体的创建
struct Student {
	string name;
	int age;
	double score;
}s3;


int main1() {
	//创建结构体变量1
	struct Student s1;
	s1.name = "张三";
	s1.age = 20;
	s1.score = 90.5;
	cout << "姓名: " << s1.name << ", 年龄: " << s1.age << ", 分数: " << s1.score << endl;

	//创建结构体变量2
	struct Student s2 = { "李四", 22, 85.0 };
	cout << "姓名: " << s2.name << ", 年龄: " << s2.age << ", 分数: " << s2.score << endl;

	//创建结构体变量3
	s3.name = "王五";
	s3.age = 21;
	s3.score = 88.0;
	cout << "姓名: " << s3.name << ", 年龄: " << s3.age << ", 分数: " << s3.score << endl;


	system("pause");
	return 0;
}