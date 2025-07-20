//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <functional>
//#include <ctime>
//using namespace std;
////常见排序算法：sort(), random_shuffle(), merge(), reverse()
//
//template <class T>
//class Print {
//public:
//	void operator()(T& t) {
//		cout << t << " ";
//	}
//};
////sort()容器内元素排序：返回迭代器
//void test1() {
//	
//	vector<int> v = { 1,2,3,4,5 };
//
//	//升序
//	sort(v.begin(), v.end(),less<int>());
//	for_each(v.begin(), v.end(), Print<int>());
//	cout << endl;
//	//降序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), Print<int>());
//	cout << endl;
//
//}
//
////random_shuffle()指定范围元素乱序
//void test2() {
//
//	srand((unsigned int)time(NULL));
//
//	vector<int> v = { 1,2,3,4,5 };
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Print<int>());
//	cout << endl;
//}
//
////merge()容器元素合并（两容器元素次序一直）
//void test3() {
//
//	vector<int> v1 = { 6,13,17,18,19 };
//	vector<int> v2 = { 9,12,16,20 };
//	vector<int> vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), Print<int>());
//	cout << endl;
//}
//
////reverse()反转指定范围的元素
//void test4() {
//
//	vector<int> v = { 1,2,3,4,5 };
//	reverse(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), Print<int>());
//	cout << endl;
//}
//int main() {
//	test4();
//	return 0;
//}