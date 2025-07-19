//#include <iostream>
//#include <list>
//using namespace std;
////list（双向循环链表）基本使用
//
//template<typename T>
//void printList(const list<T>& L) {
//	for (typename list<T>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
////构造函数
//void test() {
//
//	//默认构造
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//区间拷贝构造
//	list<int> l1(l.begin(), l.end());
//	printList(l1);
//
//	//n个元素拷贝
//	list<string> l2(5, "hello");
//	printList(l2);
//
//	//拷贝构造
//	list<int> l3(l);
//	printList(l3);
//}
//
////赋值操作
//void test1() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//assign()区间拷贝赋值
//	list<int> l1;
//	l1.assign(l.begin(), l.end());
//	printList(l1);
//	
//	//assign()n个元素赋值
//	list<string> l2;
//	l2.assign(3, "hello");
//	printList(l2);
//
//	//重载赋值运算符
//	list<int> l3;
//	l3 = l;
//	printList(l3);
//
//	//swap()容器内容交换
//	list<int> l4;
//	l4.swap(l);
//	printList(l4);
//	printList(l);
//
//}
//
////大小操作
//void test2() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	cout << "Empty: " << l.empty() << endl;
//	cout << "Size: " << l.size() << endl;
//
//	l.resize(2);
//	printList(l);
//
//	l.resize(10, 0);
//	printList(l);
//
//}
//
////插入删除操作
//void test3() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//尾部添加
//	l.push_back(99);
//	printList(l);
//	//尾部删除
//	l.pop_back();
//	printList(l);
//
//	//头部插入
//	l.push_front(-99);
//	printList(l);
//	//头部删除
//	l.pop_front();
//	printList(l);
//
//	//insert()位置插入
//	l.insert(l.begin(), 99);
//	printList(l);
//	l.insert(l.begin(), 1, 99);	//指定位置插入n个指定元素
//	printList(l);
//
//	//erease()删除操作
//	l.erase(l.begin());		//删除指定位置元素
//	printList(l);
//	l.erase(l.begin(), l.end() );	//删除区间元素
//	printList(l);
//
//	//remove移除所有的elem元素
//	l.remove(10);	//删除所有匹配元素
//	printList(l);
//
//	//清空
//	l.clear();
//	printList(l);
//
//}
//
////数据存取
//void test4() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//队首
//	cout << "Front: " << l.front() << endl;
//	//队尾
//	cout << "Back: " << l.back() << endl;
//
//}
//
////排序与反转
//void test5() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//链表反转reverse()
//	l.reverse();
//	printList(l);
//
//	//链表排序sort()默认升序
//	l.sort();
//	printList(l);
//
//}
//
//
//int main() {
//	test();
//	return 0;
//}