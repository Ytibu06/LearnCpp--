#include <iostream>
using namespace std;

/*
template <typename T, size_t N> // 添加数组大小模板参数
void Sort(T(&arr)[N]) { // 使用数组引用保留大小信息
    for (size_t i = 0; i < N - 1; ++i) {
        for (size_t j = 0; j < N - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); // 使用标准库的swap
            }
        }
    }
}


void test() {
	int arr[] = { 4,6,3,2,1,8 };
	Sort(arr);
	cout << arr[0] << endl;

	char array[] = { 'd', 'a', 'c', 'b' };
	Sort(array);
	cout << array[0] << endl;

}
int main() { 
	test();
	return 0; 
}

*/