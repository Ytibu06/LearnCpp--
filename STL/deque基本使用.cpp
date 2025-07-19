#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
//deque（双端队列）的基本使用

/*
template<typename T>
void printDeuqe(const deque<T>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque构造函数
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

//赋值操作
void test1() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}

	deque<int> d1;
	d1 = d; //赋值操作
	printDeuqe(d1);

	deque<int> d2;
	d2.assign(d.begin(), d.end()); //使用迭代器赋值
	printDeuqe(d2);

	deque<int> d3;
	d3.assign(10, 100); //使用值赋值
	printDeuqe(d3);

}

// deque的容量和大小
void test2() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}

	cout << "Size: " << d.size() << endl; //返回当前deque的大小
	cout << "Max Size: " << d.max_size() << endl; //返回当前deque的最大容量
	cout << "Is Empty: " << d.empty() << endl; //判断当前deque是否为空

	//重置大小
	d.resize(15);
	printDeuqe(d);
}

//deque的插入删除操作
void test3() {

	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printDeuqe(d);

	//两端插入
	d.push_back(100);
	printDeuqe(d);
	d.push_front(-100);
	printDeuqe(d);
	
	//两端删除操作
	d.pop_back();
	printDeuqe(d);
	d.pop_front();
	printDeuqe(d);

	//插入操作
	d.insert(d.begin(), 10);
	printDeuqe(d);
	d.insert(d.begin() + 1, 10);
	printDeuqe(d);
	//d.insert(d.bgein(),d.begin()+10)

	//删除操作
	d.erase(d.begin());
	printDeuqe(d);
	d.erase(d.begin() + 1);
	printDeuqe(d);
	
	//区间删除
	d.erase(d.begin(), d.end());

	//清空
	d.clear();
	printDeuqe(d);
}

//deque数据存取
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

//deque的排序
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