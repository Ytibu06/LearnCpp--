//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////普通函数
//void print(int x) {
//	cout << x << " ";
//}
//
////函数对象
//class Print {
//public:
//	void operator()(int x) {
//		cout << x << " ";
//	}
//};
//
//class Transform {
//public:
//	int operator()(int x) {
//		return x ; 
//	}
//};
//
////for_each()遍历
//void test() {
//
//	vector<int> v = { 1, 2, 3, 4, 5 };
//	for_each(v.begin(), v.end(), [](int x) {
//		cout << x << " ";
//		});
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//	
//}
//
////transform()遍历
//void test1() {
//
//	vector<int> v = { 1, 2, 3, 4, 5 };
//	vector<int> vTarget;
//	vTarget.resize(v.size());
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//	for_each(vTarget.begin(), vTarget.end(), Print());
//	cout << endl;
//}
//int main() {
//	test1();
//	return 0;
//}