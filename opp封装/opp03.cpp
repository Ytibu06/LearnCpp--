#include <iostream>
using namespace std;

class Person {

public:
	// ���캯��
	Person() {
		cout << "���캯��" << endl;
	}
	// ��������
	~Person() {
		cout << "��������" << endl;
	}
};

int main3() {
	Person p1; // ��������ʱ���ù��캯��

	return 0;
}