#include <iostream>
using namespace std;

class Student {
public:
	static int count; // 静态成员变量，用于统计学生数量
};
int Student::count = 10; // 初始化静态成员变量
void  test0(){
	cout << "静态成员变量的使用:" << Student::count << endl;
	Student s1;
	cout << "学生数量: " << s1.count << endl; // 输出学生数量
	Student s2;
	s2.count = 20; // 修改静态成员变量
	cout << "s2的学生数量: " << s2.count << endl; // 输出修改后的学生数量
}
int main9() {

	test0();
	return 0;
}