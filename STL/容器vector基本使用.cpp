#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//vector（动态数组）基本使用

/*
void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


//vector构造函数
void test() {
	vector<int> v1; //默认构造函数,无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i); //向vector中添加元素
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end()); //构造函数,指定区间
	printVector(v2);

	//n个element元素构造
	vector<int> v3(10, 100);
	printVector(v3);

	//拷贝构造
	vector<int> v4(v1);
	printVector(v4);
}

//vector赋值操作
void test1() {
	
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //向vector中添加元素
	}
	printVector(v);

	//赋值操作:operator=
	vector<int> v1 = v;
	printVector(v1);

	//assign函数
	vector<int> v2;
	v2.assign(v.begin(), v.end());
	printVector(v2);

	//n个element元素赋值
	vector<int> v3;
	v3.assign(10, 100);
	printVector(v3);
}

//vector容量和大小
void test2() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //向vector中添加元素
	}

	printVector(v);

	cout << "Size: " << v.size() << endl; //返回当前vector的大小
	cout << "Capacity: " << v.capacity() << endl; //返回当前vector的容量
	cout << "Max Size: " << v.max_size() << endl; //返回当前vector的最大容量
	cout << "Is Empty: " << v.empty() << endl; //判断当前vector是否为空

	//resize函数
	v.resize(13); //将vector的大小调整为15,默认使用0填充新元素
	printVector(v);
	v.resize(15, 100); //将vector的大小调整为15，并用100填充新元素
	printVector(v);
	v.resize(5); //将vector的大小调整为5
	printVector(v);


}

//vector插入和删除操作
void test3() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //向vector中添加元素
	}
	printVector(v);

	//insert函数
	v.insert(v.begin(), 100); //在第一个位置插入100
	printVector(v);
	v.insert(v.end(), 200); //在最后一个位置插入200
	printVector(v);
	v.insert(v.begin() + 5, 300); //在第6个位置插入300
	printVector(v);
	v.push_back(400); //在最后一个位置插入400
	printVector(v);
	
	//删除操作
	v.erase(v.begin()); //删除第一个元素
	printVector(v);
	v.erase(v.begin() + 4); //删除第5个元素
	printVector(v);
	v.pop_back(); //删除最后一个元素
	printVector(v);
	v.clear(); //清空vector
	printVector(v);
	cout << "Size after clear: " << v.size() << endl; //清空后大小为0
}

//vector数据存取
void test4(){

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //向vector中添加元素
	}
	printVector(v);

	//使用下标访问元素
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	//使用at函数访问元素
	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;

	//使用front和back函数访问第一个和最后一个元素
	cout << "First element: " << v.front() << endl;
	cout << "Last element: " << v.back() << endl;
}


//vector容器互换
void test5() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i); //向vector中添加元素
	}
	printVector(v);
	vector<int> vs;
	for (int i = 0; i < 100; i+=10)
	{
		vs.push_back(i); //向vector中添加元素
	}
	printVector(vs);

	v.swap(vs);
	printVector(v);
	printVector(vs);

	//使用
	vector<int> v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i); //向vector中添加元素
	}
	cout << "Size: " << v1.size() << endl; //返回当前vector的大小
	cout << "Capacity: " << v1.capacity() << endl; //返回当前vector的容量
	v1.resize(3);
	vector<int>(v1).swap(v1);
	cout << "Size: " << v1.size() << endl; //返回当前vector的大小
	cout << "Capacity: " << v1.capacity() << endl; //返回当前vector的容量

	//大空间转小空间时，使用匿名对象使用swap函数可以使得系统智能回收被使用过的大空间
}

//vector预留空间
void test6() {
	//reserve函数
	vector<int> v;
	v.reserve(100000);
	//减少开辟空间的操作
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
	cout << "使用reserve函数开辟空间次数：" << num << endl;

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
	cout << "未使用reserve函数开辟空间次数：" << num1 << endl;

}
int main() {
	test6();
	return 0;
}

*/