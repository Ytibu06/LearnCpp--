#include <iostream>
using namespace std;
#include <string>
//�����������������--�º���

class Person {
private:
	string name;
	int age;
public:
	//�º���
	void operator()(string test) {
		cout << test << endl;
	}

};
//ȫ�ֺ���
void p1(string test) {
	cout << test << endl;
}

int main() {
	Person p;
	//�º�������Ա������
	p("hello world");
	//ȫ�ֺ���
	p1("���");
	return 0;
}