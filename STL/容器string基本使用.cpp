#include <iostream>
#include <string>
using namespace std;
//string�Ĺ��캯����
/*
* string();����������
* * string(const char *s);ʹ���ַ���s��ʼ��
* string(const string &str);ʹ��string�����ʼ����һ��string����
* string(int n, char c);ʹ��n���ַ�c��ʼ��
* string& operator=(const char* s);		//char*���͸�ֵ����ǰ�ַ���
* string& operator=(const string& s);	//�ַ���s��ֵ����ǰ�ַ���
* string& operator=(char c);			//�ַ���ֵ���ַ���
* string& assign(const char* s);		//�ַ���s���Ƹ��ַ���
* string& assign(const char* s, int n);	//�ַ���s��ǰn���ַ�����ֵ���ַ���
* string& assign(const string &s);		//�ַ���s���Ƹ��ַ���
* string& assign(int n, char c);		//n���ַ�c��ֵ���ַ���
* �ַ���ƴ��
* �ַ����Ĳ������滻
* �ַ����Ƚ�
* �ַ�����ȡ
* �ַ����Ĳ�����ɾ��
* string�Ӵ�

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
	str5.assign("hello world", 5); // ֻ����ǰ3���ַ�
	cout << str5 << endl;

	string str6;
	str6.assign(str4); // ���������ַ���
	cout << str6 << endl;

	string str7;
	str7.assign(5, 'x'); // ��ֵ5���ַ�'x'
	cout << str7 << endl;

}

void test2() {
	string str1 = "Hello";
	string str2 = "World";

	// �ַ���ƴ��
	string str3 = str1 + " " + str2;
	cout << "ƴ�Ӻ���ַ���: " << str3 << endl;
	// �ַ�������
	size_t pos = str3.find("World");
	if (pos != string::npos) {
		cout << "'World' found at position: " << pos << endl;
	}
	// �ַ����滻
	str3.replace(pos, 5, "C++");
	cout << "�滻����ַ���: " << str3 << endl;
	// �ַ����Ƚ�
	if (str1 == "Hello") {
		cout << "str1 is equal to 'Hello'" << endl;
	}
	// �ַ�����ȡ
	cout << "��һ���ַ�: " << str3[0] << endl;
	// �ַ�������
	str3.insert(5, ", beautiful");
	cout << "�������ַ���: " << str3 << endl;
	// �ַ���ɾ��
	str3.erase(5, 11);
	cout << "ɾ������ַ���: " << str3 << endl;
	// string�Ӵ�
	string subStr = str3.substr(0, 5);
	cout << "�Ӵ�: " << subStr << endl;
}

//string �Ӵ�
void test3(){
	string str = "Hello, World!";
	// ��ȡ�Ӵ�
	string subStr = str.substr(0, 5); // ��λ��0��ʼ������Ϊ5
	cout << "�Ӵ�: " << subStr << endl;
	// �����Ӵ�
	size_t pos = str.find("World");
	if (pos != string::npos) {
		cout << "'World' found at position: " << pos << endl;
	} else {
		cout << "'World' not found" << endl;
	}
	// �滻�Ӵ�
	str.replace(pos, 5, "C++");
	cout << "�滻����ַ���: " << str << endl;
}
int main() {
	test();
	return 0;
}
*/
