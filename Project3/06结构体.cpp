#include <iostream>
using  namespace std;

struct Hero {
	string name;
	int age;
	string sex;
};
void bubbleSort(Hero * arr,int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j].age > arr[j+1].age) {
				Hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

}

int main() {
	Hero h[5]={
		{"张三", 18, "男"},
		{"李四", 20, "女"},
		{"王五", 22, "男"},
		{"赵六", 19, "女"},
		{"孙七", 21, "男"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	cout << "排序前" << endl;
	for (int i = 0; i < len; i++) {
		cout << "姓名: " << h[i].name << ", 年龄: " << h[i].age << ", 性别: " << h[i].sex << endl;
	}


	bubbleSort(h, len);

	cout << "排序后" << endl;
	for (int i = 0; i < len; i++) {
		cout << "姓名: " << h[i].name << ", 年龄: " << h[i].age << ", 性别: " << h[i].sex << endl;
	}

	system("pause");
	return 0;
}