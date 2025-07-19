#include <stack>
#include <iostream>
using namespace std;
//stack(栈)的使用

/*
stack<int> initStack() {

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
	s.push(90);
	return s;
}

//构造函数
void test(stack<int> s) {

	//默认构造
	//stack<int> s;
	

	//拷贝构造
	stack<int> s1(s);
}

//赋值操作
void test1(stack<int> s) {

	//stack<int> s;

	//重载等号操作符
	stack<int> s1;
	s1 = s;
}

//数据存取
void test2(stack<int> s) {
	//stack<int> s;

	//栈顶添加元素
	s.push(99);

	//移除栈顶元素
	s.pop();

	//返回栈顶元素
	while (!s.empty()) {
		
		cout << "Top: " << s.top() << endl;
		s.pop();
	}
	
}

//大小操作
void test3(stack<int> s) {
	//stack<int> s;

	//是否为空
	cout << "Empty: " << s.empty() << endl;

	//栈元素
	cout << "Size: " << s.size() << endl;

}
int main() {
	stack<int> s = initStack();
	test3(s);
	return 0;
}

*/