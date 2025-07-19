#include <iostream>
using namespace std;

int main3() {
	
	//初始化空指针：空指针用于给指针变量分配内存空间，但不指向任何有效的内存地址
	int* p = NULL;

	//不可访问空指针
	//0-255之间的内存编号是系统占用，系统严禁访问
	*p = 100; // 试图解引用空指针

	system("pause");
	return 0;
}