#include <iostream>
using namespace std;
#include <string>

int main1(){

	//整型
	short num = 10;
	int num2 = 11;
	long num3 = 12;
	long long num4 = 14;
	cout << "内存空间大小为" << sizeof(short) << endl;
	cout << "内存大小为" << sizeof(num) << endl;

	//浮点型
	//单精度
	float n1 = 11.11f;
	//双精度
	double n2 = 11.12;

	//字符型
	char ch = 'a';
	cout << "字符内存空间：" << sizeof(ch) << endl;
	cout << "字符型转换为asci码为：" << int(ch) << endl;

	//c的字符串
	char s[] = "this is a cpp";
	cout << "c字符串的输出：" << s << endl;
	//c++字符串：包含头文件#include <string>
	string str = "this is a about cpp";
	cout << "c++字符串的输出：" << str << endl;

	//创建bool数据类型
	bool flag = true;
	cout << "bool类型真true为：" << flag << endl;
	bool flags = false;
	cout << "bool类型假false为：" << flags << endl;
	//bool类型所占空间
	cout << "bool类型空间：" << sizeof(bool) << endl;

	//数据的输入
	int a = 0;
	cout << "输入整型变量a赋值：" << endl;
	cin >> a;
	cout << "输入的数字为：" << a << endl;

	float f = 1.0;
	cout << "输入浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "输入的浮点数为：" << f << endl;

	char c = 'a';
	cout << "输入字符变量c赋值：" << endl;
	cin >> c;
	cout << "输入的字符为：" << c << endl;

	string str1 = "hello cpp";
	cout << "输入字符串变量str1赋值：" << endl;
	cin >> str1;
	cout << "输入的字符串为：" << str1 << endl;

	bool flag1 = false;
	cout << "请给bool类型flag1输入：" << endl;
	cin >> flag;
	cout << "输入的bool数据flag1为：" << flag1 << endl;


	//
	system("pause");
	return 0;
}