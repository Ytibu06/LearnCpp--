#include <iostream>
using namespace std;

int main2() {
	
	int a = 10;
	int* p = &a;

	//输出指针p的内存大小
	cout << "32位操作系统指针p的内存大小是：" << sizeof(p) << "字节" << endl;
	cout << "32位操作系统sizeof (int *) = " << sizeof(int *) << endl;

	system("pause");
	return 0;

}