#include <iostream>
using namespace std;

int g_a = 10, g_b = 10;

int main1() {

	int a = 10, b = 10;

	cout << "�ֲ�����a�ĵ�ַ��" << (int)& a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)& b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)& g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)& g_b << endl;

	system("pause");
	return 0;

}