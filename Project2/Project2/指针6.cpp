#include <iostream>
using namespace std;

//ָ�������
int main6() {
	//����ָ���������

	int arr[5] = {11,22,33,44,55};
	int* p = arr; //ָ��pָ������arr����Ԫ��
	cout << "�������Ԫ��Ϊ��" << *p << endl; //�����Ԫ��

	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}