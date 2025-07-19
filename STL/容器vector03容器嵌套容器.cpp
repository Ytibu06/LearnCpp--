#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/*
void test() {
	vector<vector<int>> v;  // 创建一个二维vector

	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	vector<int>v5;

	//小容器添加数据
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);  // 向v1添加数据
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
		v5.push_back(i + 5);
	}

	//将小容器添加到大容器中
	v.push_back(v1);  
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);

	//将小容器添加到大容器中
	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << " ";  // 输出当前迭代器指向的元素
		}
		cout << endl;  // 换行
	}

}

int main() {
	test();
	return 0;
}

*/