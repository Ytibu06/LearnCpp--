#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	double score;
};
int main2() {

	//�����ṹ������
	struct Student stuArr[3] = {
		{"����", 20, 90.5},
		{"����", 22, 85.0},
		{"����", 21, 88.0}
	};

	//��ֵ
	stuArr[0].name = "����";
	stuArr[0].age = 20;
	stuArr[0].score = 90.5;

	//�����ṹ������
	for (int i = 0; i < 3; i++){
		cout << "����: " << stuArr[i].name 
			 << ", ����: " << stuArr[i].age 
			<< ", ����: " << stuArr[i].score << endl;
	}


	system("pause");
	return 0;
}