#include <iostream>
using namespace std;

int max(int a, int b);

//cpp������ʵ��
void main1(){

	int a, b;
	cout << "����������������";
	cin >> a >> b; // ������������
	cout << "�ϴ�����ǣ�" << max(a, b) << endl; // ����max������������
	system("pause"); // ��ͣ�����Բ鿴���

}

int max(int a, int b){
	return (a > b) ? a : b; // ���ؽϴ����
}