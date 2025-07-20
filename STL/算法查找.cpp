//#include <algorithm>
//#include <iostream>
//#include <vector>
//using namespace std;
////查找：find()查找元素，find_if()条件查找，adjacent_find()查找相邻重复元素，
//// binary_search()二分查找法，
//// count()统计元素个数，count_if()条件查找元素个数
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name; 
//		this->age = age;
//	}
//	//重载==运算符
//	bool operator==(const Person& p) const {
//		if (this->name == p.name && this->age == p.age) {
//			return true;
//		}
//		else
//			return false;
//	}
//	string name;
//	int age;
//};
//
//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val >= 5;
//	}
//};
//
//class Greater20 {
//public:
//	bool operator()(Person& p) {
//		return p.age > 20;
//	}
//};
//
////find()查找元素：返回迭代器
//void test1() {
//
//	//内置数据类型
//	vector<int> v = { 1,2,3,4,5 };
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);	//返回迭代器
//	if (it != v.end()) {
//		cout << "True" << endl;
//	}
//
//	//自定义数据类型
//	vector<Person> p = { Person("Alice",18), Person("Bob", 20), Person("Charlie", 22) };
//	Person pp("Charlie", 22);
//	vector<Person>::iterator i = find(p.begin(), p.end(), pp);
//	if (i == p.end()) {
//		cout << "True" << endl;
//	}
//
//}
//
////find_if()条件查找：返回迭代器
//void test2() {
//
//	//内置数据
//	vector<int> v = { 1,2,3,4,5 };
//	auto it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it != v.end()) {
//		cout << "Find_if it" << endl;
//	}
//
//	//自定义数据
//	vector<Person> p = { Person("Alice",18), Person("Bob", 20), Person("Charlie", 22) };
//	auto it1 = find_if(p.begin(), p.end(), Greater20());
//	if (it1 != p.end()) {
//		cout << "Find_if it" << endl;
//	}
//
//}
//
////adjacent_find()查找相邻重复元素：返回迭代器
//void test3() {
//
//	vector<int> v = { 1,2,3,4,5 };
//	auto it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) {
//		cout << "adjacent_find Can not" << endl;
//	}
//}
//
////binary_search()二分查找法:返回boolean值---有序
//void test4() {
//
//	vector<int> v = { 1,2,3,4,5 };
//	bool it = binary_search(v.begin(), v.end(),4);
//
//	if( it ) {
//		cout << "binary_search Can find" << endl;
//	} else {
//		cout << "binary_search Can not find" << endl;
//	}
//}
//
////count()统计元素个数:返回元素个数
//void test5() {
//
//	//内置数据类型
//	vector<int> v = { 1,2,3,4,5 };
//	int count_result = count(v.begin(), v.end(), 3);
//	cout << "Count of 3: " << count_result << endl;
//
//	//自定义数据类型
//	vector<Person> p = { Person("Alice",18), Person("Bob", 20), Person("Charlie", 22) };
//	int count_person = count(p.begin(), p.end(), Person("Alice", 18));
//	cout << "Count of Person Alice: " << count_person << endl;
//
//}
//
////count_if()条件查找元素个数：返回元素个数
//void test6() {
//
//	//内置数据类型
//	vector<int> v = { 1,2,3,4,5 };
//	auto count_result = count_if(v.begin(), v.end(), GreaterFive());
//	cout << "Count of elements >= 5: " << count_result << endl;
//
//	//自定义数据类型
//	vector<Person> p = { Person("Alice",18), Person("Bob", 20), Person("Charlie", 22) };
//	auto count_person = count_if(p.begin(), p.end(), Greater20());
//	cout << "Count of Persons > 20: " << count_person << endl;
//
//}
//
//int main() {
//	test6();
//	return 0;
//}