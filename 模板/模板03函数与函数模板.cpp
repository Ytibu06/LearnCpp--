#include <iostream>
using namespace std;
//普通函数：可以自动进行隐式钻换（根据情况自动将数据类型进行智能转换）
// 模板函数：可以根据传入的参数类型进行智能转换
//自动类型推导：无法进行自动隐式转换，必须推导出一致的数据类型T才可以使用函数模板
// 显示指定类型：可以进行自动隐式转换，必须要确定出T的数据类型才可以使用函数模板


//template <typename T>
//void print(const T& value) {
//	cout << value << endl;
//}
//
//void test() {
//	print<int>(42);                // Print an integer
//	print<float>(3.14);             // Print a double
//}
//
//int main() {
//	test();
//	return 0;
//}