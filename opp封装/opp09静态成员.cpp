#include <iostream>
using namespace std;

class Student {
public:
	static int count; // ��̬��Ա����������ͳ��ѧ������
};
int Student::count = 10; // ��ʼ����̬��Ա����
void  test0(){
	cout << "��̬��Ա������ʹ��:" << Student::count << endl;
	Student s1;
	cout << "ѧ������: " << s1.count << endl; // ���ѧ������
	Student s2;
	s2.count = 20; // �޸ľ�̬��Ա����
	cout << "s2��ѧ������: " << s2.count << endl; // ����޸ĺ��ѧ������
}
int main9() {

	test0();
	return 0;
}