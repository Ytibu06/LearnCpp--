#include <iostream>
using namespace std;

int main2() {
	int a = 10;
	int& a_1 = a; // ��������a_�����ñ���a
	cout << "a = " << a << endl; // ���a��ֵ
	cout << "a_1 = " << a_1 << endl; // ���a_��ֵ

	a_1 = 20; // �޸�a_��ֵ

	cout << "a = " << a << endl; // ����޸ĺ��a��ֵ
	cout << "a_1 = " << a_1 << endl; // ����޸ĺ��a_��ֵ

	system("pause");
	return 0;
	
}