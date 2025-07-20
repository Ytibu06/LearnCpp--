//#include <functional>
//#include <iostream>
//using namespace std;
//
////STL内建了部分函数对象（可供直接使用）
////分类：算数仿函数，关系仿函数，逻辑仿函数
//
////算数仿函数：plus（加法），minus（减法），multiplies（乘法），divides（除法），modulus（取模），negate（取反）
//void test() {
//
//	negate<int>n;
//	cout << n(50) << endl;
//
//	plus<int> p;
//	cout << p(1, 100) << endl;
//
//	minus<int> m;
//	cout << m(100, 1) << endl;
//
//	multiplies<int> mu;
//	cout << mu(1, 100) << endl;
//
//	divides<int> d;
//	cout << d(100, 10) << endl;
//
//	modulus<int> mo;
//	cout << mo(100, 3) << endl;
//}
//
////关系仿函数：equal_to(等于), not_equal_to(不等于), greater(大于), greater_equal(大于等于), less(小于), less_equal(小于等于)
//void test1() {
//
//	equal_to<int> e;
//	cout << e(10, 10) << endl;
//	not_equal_to<int> ne;
//	cout << ne(10, 20) << endl;
//	greater<int> g;
//	cout << g(20, 10) << endl;
//	greater_equal<int> ge;
//	cout << ge(20, 20) << endl;
//	less<int> l;
//	cout << l(10, 20) << endl;
//	less_equal<int> le;
//	cout << le(20, 20) << endl;
//}
//
////逻辑仿函数：logical_and(与), logical_or(或), logical_not(非)
//void test2() {
//	logical_and<bool> la;
//	cout << la(true, false) << endl; // 逻辑与
//	logical_or<bool> lo;
//	cout << lo(true, false) << endl; // 逻辑或
//	logical_not<bool> ln;
//	cout << ln(false) << endl; // 逻辑非
//}
//int main() { 
//	test2();
//	return 0;
//}