#include <iostream>
using namespace std;

//��ʼ���б���C++��һ��������﷨�������ڶ��󴴽�ʱֱ�ӳ�ʼ����Ա������
class Prash {
public:

	Prash(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {

	}

	int m_A;
	int m_B;
	int m_C;
};

int main7() {

	// ��ʼ���б��ʹ��
	Prash p(1, 2, 3);
	cout << "m_A: " << p.m_A << ", m_B: " << p.m_B << ", m_C: " << p.m_C << endl;

	return 0;
}