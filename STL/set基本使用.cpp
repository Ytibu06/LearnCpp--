#include <iostream>
#include <set>
using namespace std;
//set/multiset（集合/二叉树）基本使用
//特点：set自动排序，不允许存在重复值
//multiset: 允许重复插入

template<typename T>
void printSet(const set<T>& s) {
	for (typename set<T>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;
}

//构造函数
void test() {

	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	set<int> s1(s);

}

//大小交换
void test1() {

	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	cout << "Empty: " << s.empty() << endl;
	cout << "Size: " << s.size() << endl;

	set<int> s1;
	s1.swap(s);
	printSet(s1);
	printSet(s);

}

//插入与删除操作
void test2() {

	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	//直接插入元素
	s.insert(40);
	printSet(s);

	//删除指定元素
	s.erase(10);
	printSet(s);
	//删除迭代器所指元素
	s.erase(s.begin());
	printSet(s);
	//删除区间元素
	s.erase(s.begin(), s.end());
	printSet(s);

	//清空
	s.clear();
	printSet(s);
}

//查找与统计
void test3() {
	
	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);

	//查找
	set<int>::iterator pos = s.find(10);

	if (pos != s.end()) {
		cout << "Find it" << endl;
	}
	else
		cout << "Can not find it" << endl;

	//统计
	s.count(10) ? cout << "10 exists" << endl : cout << "10 does not exist" << endl;
}

//pair对组
void test4() {

	//方式一
	pair<string, int> p("10", 20);
	cout << "Pair first: " << p.first << ", second: " << p.second << endl;

	//方式二
	pair<string, int> p1 = make_pair("30", 40);
	cout << "Pair first: " << p1.first << ", second: " << p1.second << endl;
}
int main() {
	test4();
	return 0;
}