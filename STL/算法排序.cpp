//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <functional>
//#include <ctime>
//using namespace std;
////���������㷨��sort(), random_shuffle(), merge(), reverse()
//
//template <class T>
//class Print {
//public:
//	void operator()(T& t) {
//		cout << t << " ";
//	}
//};
////sort()������Ԫ�����򣺷��ص�����
//void test1() {
//	
//	vector<int> v = { 1,2,3,4,5 };
//
//	//����
//	sort(v.begin(), v.end(),less<int>());
//	for_each(v.begin(), v.end(), Print<int>());
//	cout << endl;
//	//����
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), Print<int>());
//	cout << endl;
//
//}
//
////random_shuffle()ָ����ΧԪ������
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
////merge()����Ԫ�غϲ���������Ԫ�ش���һֱ��
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
////reverse()��תָ����Χ��Ԫ��
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