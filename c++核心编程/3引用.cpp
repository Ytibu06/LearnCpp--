#include <iostream>
using namespace std;
//ֵ����
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1: a = " << a << ", b = " << b << endl; // ����������ֵ
}
//ָ�봫��
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap2: a = " << *a << ", b = " << *b << endl; // ����������ֵ
}
//���ô���
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap3: a = " << a << ", b = " << b << endl; // ����������ֵ

}

int main21() {

	int a = 10, b=100;
	cout << "Before swap: a = " << a << ", b = " << b << endl; // �������ǰ��ֵ
	swap1(a, b); // ����swap1��������a��b��ֵ
	cout << "After swap1: a = " << a << ", b = " << b << endl; // ����������ֵ
	swap2(&a, &b); // ����swap2��������a��b��ֵ
	cout << "After swap2: a = " << a << ", b = " << b << endl; // ����������ֵ
	swap3(a, b); // ����swap3��������a��b��ֵ
	cout << "After swap3: a = " << a << ", b = " << b << endl; // ����������ֵ

	system("pause");
	return 0;
}