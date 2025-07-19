#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//vector����̬���飩����ʹ��

/*
void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


//vector���캯��
void test() {
	vector<int> v1; //Ĭ�Ϲ��캯��,�޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i); //��vector�����Ԫ��
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end()); //���캯��,ָ������
	printVector(v2);

	//n��elementԪ�ع���
	vector<int> v3(10, 100);
	printVector(v3);

	//��������
	vector<int> v4(v1);
	printVector(v4);
}

//vector��ֵ����
void test1() {
	
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //��vector�����Ԫ��
	}
	printVector(v);

	//��ֵ����:operator=
	vector<int> v1 = v;
	printVector(v1);

	//assign����
	vector<int> v2;
	v2.assign(v.begin(), v.end());
	printVector(v2);

	//n��elementԪ�ظ�ֵ
	vector<int> v3;
	v3.assign(10, 100);
	printVector(v3);
}

//vector�����ʹ�С
void test2() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //��vector�����Ԫ��
	}

	printVector(v);

	cout << "Size: " << v.size() << endl; //���ص�ǰvector�Ĵ�С
	cout << "Capacity: " << v.capacity() << endl; //���ص�ǰvector������
	cout << "Max Size: " << v.max_size() << endl; //���ص�ǰvector���������
	cout << "Is Empty: " << v.empty() << endl; //�жϵ�ǰvector�Ƿ�Ϊ��

	//resize����
	v.resize(13); //��vector�Ĵ�С����Ϊ15,Ĭ��ʹ��0�����Ԫ��
	printVector(v);
	v.resize(15, 100); //��vector�Ĵ�С����Ϊ15������100�����Ԫ��
	printVector(v);
	v.resize(5); //��vector�Ĵ�С����Ϊ5
	printVector(v);


}

//vector�����ɾ������
void test3() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //��vector�����Ԫ��
	}
	printVector(v);

	//insert����
	v.insert(v.begin(), 100); //�ڵ�һ��λ�ò���100
	printVector(v);
	v.insert(v.end(), 200); //�����һ��λ�ò���200
	printVector(v);
	v.insert(v.begin() + 5, 300); //�ڵ�6��λ�ò���300
	printVector(v);
	v.push_back(400); //�����һ��λ�ò���400
	printVector(v);
	
	//ɾ������
	v.erase(v.begin()); //ɾ����һ��Ԫ��
	printVector(v);
	v.erase(v.begin() + 4); //ɾ����5��Ԫ��
	printVector(v);
	v.pop_back(); //ɾ�����һ��Ԫ��
	printVector(v);
	v.clear(); //���vector
	printVector(v);
	cout << "Size after clear: " << v.size() << endl; //��պ��СΪ0
}

//vector���ݴ�ȡ
void test4(){

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //��vector�����Ԫ��
	}
	printVector(v);

	//ʹ���±����Ԫ��
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	//ʹ��at��������Ԫ��
	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;

	//ʹ��front��back�������ʵ�һ�������һ��Ԫ��
	cout << "First element: " << v.front() << endl;
	cout << "Last element: " << v.back() << endl;
}


//vector��������
void test5() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //��vector�����Ԫ��
	}
	printVector(v);
	vector<int> vs;
	for (int i = 0; i < 100; i+=10)
	{
		vs.push_back(i); //��vector�����Ԫ��
	}
	printVector(vs);

	v.swap(vs);
	printVector(v);
	printVector(vs);

	//ʹ��
	vector<int> v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i); //��vector�����Ԫ��
	}
	cout << "Size: " << v1.size() << endl; //���ص�ǰvector�Ĵ�С
	cout << "Capacity: " << v1.capacity() << endl; //���ص�ǰvector������
	v1.resize(3);
	vector<int>(v1).swap(v1);
	cout << "Size: " << v1.size() << endl; //���ص�ǰvector�Ĵ�С
	cout << "Capacity: " << v1.capacity() << endl; //���ص�ǰvector������

	//��ռ�תС�ռ�ʱ��ʹ����������ʹ��swap��������ʹ��ϵͳ���ܻ��ձ�ʹ�ù��Ĵ�ռ�
}

//vectorԤ���ռ�
void test6() {
	//reserve����
	vector<int> v;
	v.reserve(100000);
	//���ٿ��ٿռ�Ĳ���
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "ʹ��reserve�������ٿռ������" << num << endl;

	vector<int> vs;
	int num1 = 0;
	int* p1 = NULL;
	for (int i = 0; i < 100000; i++)
	{
		vs.push_back(i);
		if (p1 != &vs[0]) {
			p1 = &vs[0];
			num1++;
		}
	}
	cout << "δʹ��reserve�������ٿռ������" << num1 << endl;

}
int main() {
	test6();
	return 0;
}

*/