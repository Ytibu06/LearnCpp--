#include <iostream>
using namespace std;

class Person10 {
public:
	static void func() {
		m_A = 10; // ��̬��Ա���������ھ�̬�����з���
		cout << "��̬����������" << endl;
	}
	static int m_A;
	int B;
};

int Person10::m_A = 0; // ��̬��Ա��������

int test1() {
	Person10::func(); // ���þ�̬����
	Person10 p;
	p.func(); // Ҳ����ͨ��������þ�̬�����������Ƽ�
	return 0;
}
int main10() {
	test1(); // ���ò��Ժ���
	return 0;
}