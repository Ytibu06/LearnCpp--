//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////函数对象（类）：重载函数调用操作符的类，对象称为函数对象；使用重载的()时，行为类似于函数调用，被称为仿函数
////谓词：返回bool类型的仿函数，operator接受一个参数：一元谓词，operator接受两个参数：二元谓词
//
//class GerterFive {
//public:
//	bool operator()(int v) {
//		return v > 5;
//	}
//};
//class myCompare {
//public:
//	bool operator()(int val1, int val2) {
//		return val1 > val2;
//	}
//};
//class myAdd {
//public:
//	int operator()(int a, int b) {
//		return a + b;
//	}
//};
//
//void test() {
//	myAdd add;
//	int mid = add(10, 100);
//	cout << mid << endl;
//}
//
//void test1() {
//
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	auto find =  find_if(v.begin(), v.end(), GerterFive());
//	if (find == v.end()) {
//		cout << "Can not find" << endl;
//	}
//	else
//		cout << "Find it" << endl;
//}
//
//void test2() {
//
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end(), myCompare());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	test1();
//	return 0;
//}