#include <iostream>
using namespace std;
/*
��ģ��̳У�
����̳и���ģ��ʱ����������ʱ��Ҫָ������ģ������Ͳ���
����ģ��������ָ������ģ������Ͳ���
*/

/*
template<class T>
class Base {
	T m;
public:
	void func() {
		cout << "Base::func()" << endl;
	}
};

//����̳и���ģ�岢ָ������ģ������Ͳ���
class Son : public Base<int> {
	// Son��̳���Base<int>
	// �����int��Baseģ������Ͳ���

};

//����ģ��̳и���ģ��
template<class T>
class Son2 : public Base<T> {

};

void test() {
	Son s; // Son��ʵ����
	Son2<int> s2; // Son2��ʵ������T��ָ��Ϊdouble
	s.func(); // ����Base<int>��func()
	s2.func(); // ����Base<int>��func()
}
int main() {
	test();
	return 0;
}

*/
