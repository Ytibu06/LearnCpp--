#include <iostream>
using namespace std;

int main2() {
	
	int a = 10;
	int* p = &a;

	//���ָ��p���ڴ��С
	cout << "32λ����ϵͳָ��p���ڴ��С�ǣ�" << sizeof(p) << "�ֽ�" << endl;
	cout << "32λ����ϵͳsizeof (int *) = " << sizeof(int *) << endl;

	system("pause");
	return 0;

}