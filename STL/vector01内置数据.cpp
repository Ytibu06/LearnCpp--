#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 迭代器遍历vector的三种方式


/*
void print(int value) {
	cout << value << " ";  // 输出当前值
}

void test() {

	//创建vector对象
	vector<int> v;

	//尾插数据 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//通过迭代器访问数据
	vector<int>::iterator itBegin = v.begin();	// 起始迭代器，指向第一个元素
	vector<int>::iterator itEnd = v.end();	// 结束迭代器，指向最后一个元素的下一个位置

	//第一种的迭代器遍历方式
	while(itBegin != itEnd) {
		cout << *itBegin << " ";  // 输出当前迭代器指向的元素
		++itBegin;  // 移动到下一个元素
	}

	//第二种的迭代器遍历方式
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";  // 输出当前迭代器指向的元素
	}

	//第三种的迭代器遍历方式
	for_each(v.begin(), v.end(), print);
}

int main() {
	test();
	return 0;
}

*/