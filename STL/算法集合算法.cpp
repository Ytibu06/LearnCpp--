#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// ���������㷨:

//set_union()�����������ϵĲ���
void test1() {

	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = { 4,5,6,7,8 };
	vector<int> result(v1.size() + v2.size());
	set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());
	for (int i : result) {
		cout << i << " ";
	}
	cout << endl;
}
//set_intersection()�����������ϵĽ���
void test2() {

	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = { 4,5,6,7,8 };
	vector<int> result(min(v1.size(), v2.size()));
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());
	for (int i : result) {
		cout << i << " ";
	}
	cout << endl;
}
//set_difference()�����������ϵĲ
void test3() {

	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = { 4,5,6,7,8 };
	vector<int> result(v1.size());
	set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());
	for (int i : result) {
		cout << i << " ";
	}
	cout << endl;
}
int main() {
	test1();
	return 0;
}