#include <iostream>
#include <fstream>
using namespace std;
#include <string>

//void test() {
//	//����ͷ�ļ�
//
//	//����������
//	ifstream ifs;
//
//	//���ļ����ж��Ƿ��
//	ifs.open("test.txt",ios::in);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	} 
//
//	//��ȡ�ļ����ݷ�ʽһ��
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf <<endl;
//	}
//
//	//��ʽ����
//	/*char buff[1024] = { 0 };
//	while (ifs.getline(buff, sizeof(buff))) {
//		cout << buff << endl;
//	}*/
//
//	//��ʽ����
//	/*string bufff;
//	while (getline(ifs, bufff)) {
//		cout << bufff << endl;
//	}*/
//
//	//��ʽ�ģ�
//	/*char c;
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}*/
//
//	//�ر��ļ�
//	ifs.close();
//}
//int main() {
//	test();
//	return 0;
//}