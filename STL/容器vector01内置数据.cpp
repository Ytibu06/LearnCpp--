#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// ����������vector�����ַ�ʽ


/*
void print(int value) {
	cout << value << " ";  // �����ǰֵ
}

void test() {

	//����vector����
	vector<int> v;

	//β������ 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//ͨ����������������
	vector<int>::iterator itBegin = v.begin();	// ��ʼ��������ָ���һ��Ԫ��
	vector<int>::iterator itEnd = v.end();	// ������������ָ�����һ��Ԫ�ص���һ��λ��

	//��һ�ֵĵ�����������ʽ
	while(itBegin != itEnd) {
		cout << *itBegin << " ";  // �����ǰ������ָ���Ԫ��
		++itBegin;  // �ƶ�����һ��Ԫ��
	}

	//�ڶ��ֵĵ�����������ʽ
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";  // �����ǰ������ָ���Ԫ��
	}

	//�����ֵĵ�����������ʽ
	for_each(v.begin(), v.end(), print);
}

int main() {
	test();
	return 0;
}

*/