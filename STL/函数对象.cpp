#include <iostream>
using namespace std;

//���������ࣩ�����غ������ò��������࣬�����Ϊ��������ʹ�����ص�()ʱ����Ϊ�����ں������ã�����Ϊ�º���

class myAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test() {
	myAdd add;
	int mid = add(10, 100);
	cout << mid << endl;
}
int main() {
	test();
	system("puase");
	return 0;
}