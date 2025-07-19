#include <iostream>
using namespace std;
/*
类模板继承：
子类继承父类模板时：子类声明时需要指定父类模板的类型参数
子类模板可以灵活指定父类模板的类型参数
*/

/*
template<class T>
class Base {
	T m;
public:
	void func() {
		cout << "Base::func()" << endl;
	}
};

//子类继承父类模板并指定父类模板的类型参数
class Son : public Base<int> {
	// Son类继承了Base<int>
	// 这里的int是Base模板的类型参数

};

//子类模板继承父类模板
template<class T>
class Son2 : public Base<T> {

};

void test() {
	Son s; // Son类实例化
	Son2<int> s2; // Son2类实例化，T被指定为double
	s.func(); // 调用Base<int>的func()
	s2.func(); // 调用Base<int>的func()
}
int main() {
	test();
	return 0;
}

*/
