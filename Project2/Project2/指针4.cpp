#include <iostream>
using namespace std;

void main4() {

	//野指针：野指针是指向未分配或已释放内存的指针，访问野指针会导致未定义行为
	//严禁野指针的出现， 野指针可能会导致程序崩溃或数据损坏
	int* p = (int*)0x1100;


	system("pause");
}