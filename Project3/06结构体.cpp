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
		{"����", 18, "��"},
		{"����", 20, "Ů"},
		{"����", 22, "��"},
		{"����", 19, "Ů"},
		{"����", 21, "��"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	cout << "����ǰ" << endl;
	for (int i = 0; i < len; i++) {
		cout << "����: " << h[i].name << ", ����: " << h[i].age << ", �Ա�: " << h[i].sex << endl;
	}


	bubbleSort(h, len);

	cout << "�����" << endl;
	for (int i = 0; i < len; i++) {
		cout << "����: " << h[i].name << ", ����: " << h[i].age << ", �Ա�: " << h[i].sex << endl;
	}

	system("pause");
	return 0;
}