#include <iostream>
using namespace std;

//冒泡排序函数
void bubbleSort(int* p, int len);

int main() {
	
	int arr[10] = { 8,9,2,3,4,6,1,7,5,0 };
	
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr,len);

	cout << "排序后的数组为：" << endl;
	for(int i = 0; i < 10; i++) {
		cout << arr[i] <<endl;
	
	}

	system("pause");
	return 0;
}
void bubbleSort(int* p, int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-i-1; j++) {
			if (p[j] > p[j+1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}