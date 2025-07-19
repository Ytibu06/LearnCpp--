#include <iostream>
using namespace std;

struct Student {
	string name;
	int score;
};

struct Teacher {
	string name;
	Student students[5]; // 教师有5个学生
};

void allocateSpace(Teacher * p, int len) {
	for (int i = 0; i < len; i++) {
		cout << "请输入第" << i + 1 << "位教师的姓名: ";
		cin >> p->name;
		cout << "请输入该教师的5位学生信息(姓名 分数):" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t请输入第" << j + 1 << "位学生的姓名: ";
			cin >> p->students[j].name;
			cout << "\t请输入学生" << p->students[j].name << "的分数: ";
			cin >> p->students[j].score;
		}
		p++;

	}
}
void printInof(const Teacher * p, int len) {
	for (int i = 0; i < len; i++) {
		cout << "教师姓名: " << p->name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名: " << p->students[j].name << ", 分数: " << p->students[j].score << endl;
		}
		p++;
	}
}
int  main5() {

	// 创建教师对象
	Teacher teacher[3];
	 /*Teacher teacher[3] = {
	{ "张老师", { {"小明", 90}, {"小红", 85}, {"小刚", 88}, {"小丽", 92}, {"小华", 80} } },
	{ "李老师", {{"小强", 95}, {"小美", 89}, {"小亮", 91}, {"小芳", 87}, {"小杰", 93}} },
	{ "王老师", {{"小军", 84}, {"小霞", 90}, {"小涛", 86}, {"小燕", 88}, {"小波", 82}} }
};*/
	//生成结构体数组长度
	int len = sizeof(teacher) / sizeof(teacher[0]);
	// 输入教师和学生信息
	allocateSpace(teacher,len);
	//输出教师和学生信息
	printInof(teacher, len);
	
	
	system("pause");
	return 0;
}