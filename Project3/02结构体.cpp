#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	double score;
};
int main2() {

	//创建结构体数组
	struct Student stuArr[3] = {
		{"张三", 20, 90.5},
		{"李四", 22, 85.0},
		{"王五", 21, 88.0}
	};

	//赋值
	stuArr[0].name = "张三";
	stuArr[0].age = 20;
	stuArr[0].score = 90.5;

	//遍历结构体数组
	for (int i = 0; i < 3; i++){
		cout << "姓名: " << stuArr[i].name 
			 << ", 年龄: " << stuArr[i].age 
			<< ", 分数: " << stuArr[i].score << endl;
	}


	system("pause");
	return 0;
}