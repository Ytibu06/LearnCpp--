#include <iostream>
#include <string>
using namespace std;
//string��ֵ����
/*
* string& operator=(const char* s);		//char*���͸�ֵ����ǰ�ַ���
* string& operator=(const string& s);	//�ַ���s��ֵ����ǰ�ַ���
* string& operator=(char c);			//�ַ���ֵ���ַ���
* string& assign(const char* s);		//�ַ���s���Ƹ��ַ���
* string& assign(const char* s, int n);	//�ַ���s��ǰn���ַ�����ֵ���ַ���
* string& assign(const string &s);		//�ַ���s���Ƹ��ַ���
* string& assign(int n, char c);		//n���ַ�c��ֵ���ַ���
*/

/*
void test() {

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
	str5.assign("hello world", 5); // ֻ����ǰ3���ַ�
	cout << str5 << endl;

	string str6;
	str6.assign(str4); // ���������ַ���
	cout << str6 << endl;

	string str7;
	str7.assign(5, 'x'); // ��ֵ5���ַ�'x'
	cout << str7 << endl;

}
int main() {
	test();
	return 0;
}
*/

