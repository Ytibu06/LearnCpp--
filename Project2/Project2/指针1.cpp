#include <iostream>
using namespace std;

void main1() {

	//�������
	int a = 10;
	//����ָ��
	int* p;

	//ָ��ָ�����a�ĵ�ַ
	p = &a;

	//�������a�ĵ�ַ
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	//���ָ��p��ֵ
	cout << "p��ֵ�ǣ�" << p << endl;
	

	system("pause");
}