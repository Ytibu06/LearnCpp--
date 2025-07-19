//#include <iostream>
//using namespace std;
////其他继承方式：
//// 公共继承（除私有属性，其他属性继承为公共属性）、
//// 保护继承（除私有属性，其他属性继承为保护属性）、
//// 私有继承（除私有属性，其他属性继承为私有属性）
//
//class Fun {
//private:
//	int B;
//protected:
//	int C;
//public:
//	int A;
//};
//
//class Son1 : public Fun {
//public:
//	void func() {
//		C = 1; // 保护属性可以访问
//		A = 2; // 公共属性可以访问
//		// B = 3; // 私有属性不能访问
//	}
//};
//class Son2 : protected Fun {
//public:
//	void func() {
//		C = 1; // 保护属性可以访问
//		A = 2; // 公共属性可以访问
//		// B = 3; // 私有属性不能访问
//	}
//};
//class Son3 : private Fun {
//public:
//	void func() {
//		C = 1; // 保护属性可以访问
//		A = 2; // 公共属性可以访问
//		// B = 3; // 私有属性不能访问
//	}
//};
//
//void test() {
//	Son1 s1;
//	s1.A;
//	
//	Son2 s2;
//	s2.func();
//
//	Son3 s3;
//	s3.func();
//}
//
//int main() {
//	test();
//
//	return 0;
//}