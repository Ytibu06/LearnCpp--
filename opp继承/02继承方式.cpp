//#include <iostream>
//using namespace std;
////�����̳з�ʽ��
//// �����̳У���˽�����ԣ��������Լ̳�Ϊ�������ԣ���
//// �����̳У���˽�����ԣ��������Լ̳�Ϊ�������ԣ���
//// ˽�м̳У���˽�����ԣ��������Լ̳�Ϊ˽�����ԣ�
//
//class Fun {
//private:
//	int B;
//protected:
//	int C;
//public:
//	int A;
//};
//
//class Son1 : public Fun {
//public:
//	void func() {
//		C = 1; // �������Կ��Է���
//		A = 2; // �������Կ��Է���
//		// B = 3; // ˽�����Բ��ܷ���
//	}
//};
//class Son2 : protected Fun {
//public:
//	void func() {
//		C = 1; // �������Կ��Է���
//		A = 2; // �������Կ��Է���
//		// B = 3; // ˽�����Բ��ܷ���
//	}
//};
//class Son3 : private Fun {
//public:
//	void func() {
//		C = 1; // �������Կ��Է���
//		A = 2; // �������Կ��Է���
//		// B = 3; // ˽�����Բ��ܷ���
//	}
//};
//
//void test() {
//	Son1 s1;
//	s1.A;
//	
//	Son2 s2;
//	s2.func();
//
//	Son3 s3;
//	s3.func();
//}
//
//int main() {
//	test();
//
//	return 0;
//}