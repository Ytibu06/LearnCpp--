#include <iostream>
#include <string>
using namespace std;
//string的构造函数：
/*
* string();创建空数组
* * string(const char *s);使用字符串s初始化
* string(const string &str);使用string对象初始化另一个string对象
* string(int n, char c);使用n个字符c初始化
* string& operator=(const char* s);		//char*类型赋值给当前字符串
* string& operator=(const string& s);	//字符串s赋值给当前字符串
* string& operator=(char c);			//字符赋值给字符串
* string& assign(const char* s);		//字符串s复制给字符串
* string& assign(const char* s, int n);	//字符串s的前n个字符串赋值给字符串
* string& assign(const string &s);		//字符串s复制给字符串
* string& assign(int n, char c);		//n个字符c赋值给字符串
* 字符串拼接
* 字符串的查找与替换
* 字符串比较
* 字符串存取
* 字符串的插入与删除
* string子串

*/

/*
void test() {

	string s1;

	const char* str = "hello world";
	string s2(str);

	string s3(s2);

	string s4(10, 'a');

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

void test1() {

	const char* p = "hello world";
	string str;
	str = p;
	cout << str << endl;

	const string& p1 = "hello world";
	string str2 = p1;
	cout << str2 << endl;

	string str3;
	str3 = 'h';
	cout << str3 << endl;

	string str4;
	str4.assign("hello");
	cout << str4 << endl;

	string str5;
	str5.assign("hello world", 5); // 只复制前3个字符
	cout << str5 << endl;

	string str6;
	str6.assign(str4); // 复制整个字符串
	cout << str6 << endl;

	string str7;
	str7.assign(5, 'x'); // 赋值5个字符'x'
	cout << str7 << endl;

}

void test2() {
	string str1 = "Hello";
	string str2 = "World";

	// 字符串拼接
	string str3 = str1 + " " + str2;
	cout << "拼接后的字符串: " << str3 << endl;
	// 字符串查找
	size_t pos = str3.find("World");
	if (pos != string::npos) {
		cout << "'World' found at position: " << pos << endl;
	}
	// 字符串替换
	str3.replace(pos, 5, "C++");
	cout << "替换后的字符串: " << str3 << endl;
	// 字符串比较
	if (str1 == "Hello") {
		cout << "str1 is equal to 'Hello'" << endl;
	}
	// 字符串存取
	cout << "第一个字符: " << str3[0] << endl;
	// 字符串插入
	str3.insert(5, ", beautiful");
	cout << "插入后的字符串: " << str3 << endl;
	// 字符串删除
	str3.erase(5, 11);
	cout << "删除后的字符串: " << str3 << endl;
	// string子串
	string subStr = str3.substr(0, 5);
	cout << "子串: " << subStr << endl;
}

//string 子串
void test3(){
	string str = "Hello, World!";
	// 获取子串
	string subStr = str.substr(0, 5); // 从位置0开始，长度为5
	cout << "子串: " << subStr << endl;
	// 查找子串
	size_t pos = str.find("World");
	if (pos != string::npos) {
		cout << "'World' found at position: " << pos << endl;
	} else {
		cout << "'World' not found" << endl;
	}
	// 替换子串
	str.replace(pos, 5, "C++");
	cout << "替换后的字符串: " << str << endl;
}
int main() {
	test();
	return 0;
}
*/
