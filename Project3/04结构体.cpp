#include <iostream>
using namespace std;


struct Student {
	string name;
	int age;
	double score;
};
void printStudent(const Student * s) {
	//s->name = "李四"; // const 修饰的结构体指针严禁修改指针指向的结构体成员
	cout << "姓名: " << s->name << ", 年龄: " << s->age << ", 分数: " << s->score << endl;
}
int main4() {

	Student s = { "张三", 20, 90.5 };

	printStudent(&s);

	
	
	system("pause");
	return 0;
}