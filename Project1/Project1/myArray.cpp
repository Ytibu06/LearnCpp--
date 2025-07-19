#include <iostream>
using namespace std;

void main2(){
	
	int arr[5] = {300,350,200,400,250};

	int max = arr[0];
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "数组中的最大值为：" << max << endl;

	cout << "逆序前数组中的元素为：" << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << endl;
	}
	int start = 0;
	int end = 4;
	while(start<end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "逆序后数组中的元素为：" << endl;
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout  << arr[i] << endl;
	}

	system("pause");

}