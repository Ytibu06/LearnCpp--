//#include <functional>
//#include <iostream>
//using namespace std;
//
////STL�ڽ��˲��ֺ������󣨿ɹ�ֱ��ʹ�ã�
////���ࣺ�����º�������ϵ�º������߼��º���
//
////�����º�����plus���ӷ�����minus����������multiplies���˷�����divides����������modulus��ȡģ����negate��ȡ����
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
////��ϵ�º�����equal_to(����), not_equal_to(������), greater(����), greater_equal(���ڵ���), less(С��), less_equal(С�ڵ���)
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
////�߼��º�����logical_and(��), logical_or(��), logical_not(��)
//void test2() {
//	logical_and<bool> la;
//	cout << la(true, false) << endl; // �߼���
//	logical_or<bool> lo;
//	cout << lo(true, false) << endl; // �߼���
//	logical_not<bool> ln;
//	cout << ln(false) << endl; // �߼���
//}
//int main() { 
//	test2();
//	return 0;
//}