#include <iostream>
using namespace std;
#include <string>

int main1(){

	//����
	short num = 10;
	int num2 = 11;
	long num3 = 12;
	long long num4 = 14;
	cout << "�ڴ�ռ��СΪ" << sizeof(short) << endl;
	cout << "�ڴ��СΪ" << sizeof(num) << endl;

	//������
	//������
	float n1 = 11.11f;
	//˫����
	double n2 = 11.12;

	//�ַ���
	char ch = 'a';
	cout << "�ַ��ڴ�ռ䣺" << sizeof(ch) << endl;
	cout << "�ַ���ת��Ϊasci��Ϊ��" << int(ch) << endl;

	//c���ַ���
	char s[] = "this is a cpp";
	cout << "c�ַ����������" << s << endl;
	//c++�ַ���������ͷ�ļ�#include <string>
	string str = "this is a about cpp";
	cout << "c++�ַ����������" << str << endl;

	//����bool��������
	bool flag = true;
	cout << "bool������trueΪ��" << flag << endl;
	bool flags = false;
	cout << "bool���ͼ�falseΪ��" << flags << endl;
	//bool������ռ�ռ�
	cout << "bool���Ϳռ䣺" << sizeof(bool) << endl;

	//���ݵ�����
	int a = 0;
	cout << "�������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���������Ϊ��" << a << endl;

	float f = 1.0;
	cout << "���븡���ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "����ĸ�����Ϊ��" << f << endl;

	char c = 'a';
	cout << "�����ַ�����c��ֵ��" << endl;
	cin >> c;
	cout << "������ַ�Ϊ��" << c << endl;

	string str1 = "hello cpp";
	cout << "�����ַ�������str1��ֵ��" << endl;
	cin >> str1;
	cout << "������ַ���Ϊ��" << str1 << endl;

	bool flag1 = false;
	cout << "���bool����flag1���룺" << endl;
	cin >> flag;
	cout << "�����bool����flag1Ϊ��" << flag1 << endl;


	//
	system("pause");
	return 0;
}