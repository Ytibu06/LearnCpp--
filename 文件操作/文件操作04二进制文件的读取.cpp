#include <iostream>
#include <fstream>
using namespace std;
//�������ļ��Ķ�ȡ����
class Person {
public:
	char Name[64];
	int Age;
};
void test() {
	//����ͷ�ļ�

	//����������
	ifstream ifs;

	//�ж��ļ��Ĵ�
	ifs.open("Person.txt", ios::in | ios::binary);
	if(!ifs.is_open()){
		cout << "��ʧ��" << endl;
		return;
	}

	//��ȡ�ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.Name << "  ���䣺" << p.Age << endl;

	//�ر��ļ�
	ifs.close();
}

int main() {
	test();
	return 0;
}