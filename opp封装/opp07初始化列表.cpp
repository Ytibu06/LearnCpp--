#include <iostream>
using namespace std;

//初始化列表是C++中一种特殊的语法，用于在对象创建时直接初始化成员变量。
class Prash {
public:

	Prash(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {

	}

	int m_A;
	int m_B;
	int m_C;
};

int main7() {

	// 初始化列表的使用
	Prash p(1, 2, 3);
	cout << "m_A: " << p.m_A << ", m_B: " << p.m_B << ", m_C: " << p.m_C << endl;

	return 0;
}