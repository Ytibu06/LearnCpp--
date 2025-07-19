#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
//deque��˫�˶��У��Ļ���ʹ��

/*
template<typename T>
void printDeuqe(const deque<T>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque���캯��
void test() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}

	deque<int> d1(d.begin(), d.end());
	printDeuqe(d1);

	deque<int> d2(10, 100);
	printDeuqe(d2);

	deque<int> d3(d1);
	printDeuqe(d3);

}

//��ֵ����
void test1() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}

	deque<int> d1;
	d1 = d; //��ֵ����
	printDeuqe(d1);

	deque<int> d2;
	d2.assign(d.begin(), d.end()); //ʹ�õ�������ֵ
	printDeuqe(d2);

	deque<int> d3;
	d3.assign(10, 100); //ʹ��ֵ��ֵ
	printDeuqe(d3);

}

// deque�������ʹ�С
void test2() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}

	cout << "Size: " << d.size() << endl; //���ص�ǰdeque�Ĵ�С
	cout << "Max Size: " << d.max_size() << endl; //���ص�ǰdeque���������
	cout << "Is Empty: " << d.empty() << endl; //�жϵ�ǰdeque�Ƿ�Ϊ��

	//���ô�С
	d.resize(15);
	printDeuqe(d);
}

//deque�Ĳ���ɾ������
void test3() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printDeuqe(d);

	//���˲���
	d.push_back(100);
	printDeuqe(d);
	d.push_front(-100);
	printDeuqe(d);
	
	//����ɾ������
	d.pop_back();
	printDeuqe(d);
	d.pop_front();
	printDeuqe(d);

	//�������
	d.insert(d.begin(), 10);
	printDeuqe(d);
	d.insert(d.begin() + 1, 10);
	printDeuqe(d);
	//d.insert(d.bgein(),d.begin()+10)

	//ɾ������
	d.erase(d.begin());
	printDeuqe(d);
	d.erase(d.begin() + 1);
	printDeuqe(d);
	
	//����ɾ��
	d.erase(d.begin(), d.end());

	//���
	d.clear();
	printDeuqe(d);
}

//deque���ݴ�ȡ
void test4() {

	deque<int> d;
	for (int i = 0; i < 10; i++){
		d.push_back(i);
	}printDeuqe(d);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;
	
	cout << d.front() << endl;
	cout << d.back() << endl;
}

//deque������
void test5() {

	deque<int> d;
	for (int i = 10; i >0; i--) {
		d.push_back(i);
	}printDeuqe(d);

	sort(d.begin(), d.end());
	cout << "Sort(): " << endl;
	printDeuqe(d);

}
int main() {
	test5();
	return 0;
}

*/