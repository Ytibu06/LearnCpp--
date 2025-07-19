//#include <map>
//#include <iostream>
//using namespace std;
////map/multimap（二叉树）基本使用
////特点：
////所有元素都是pair类型,第一个为key,第二个为value,根据键值自动排序
////map的key不能重复,如果插入重复的key,则覆盖原有的value
//
//
//template <typename K, typename V,typename C>
//void printMap(const map<K,V,C> &m) {
//	for(const auto &pair : m) {
//		cout << "Key: " << pair.first << "\tValue: " << pair.second << endl;
//	}
//}
//
//class MyCompare {
//public:
//	bool operator()(const int &a, const int &b) const {
//		return a < b ? true:false; //默认升序排序
//	}
//};
////构造函数与赋值函数
//void test() {
//
//	//默认构造
//	map<int, string> m;
//	m.insert({ {1, "one"}, {2, "two"}, {3, "three"} });
//	m.insert(pair<int, string>(4, "four"));
//	m.insert(pair<int, string>(5, "five"));
//	printMap(m);
//
//	//拷贝构造
//	map<int, string> m1(m);
//	printMap(m1);
//
//	//赋值
//	map<int, string> m2;
//	m2 = m;
//	printMap(m2);
//}
//
////大小交换
//void test1() {
//
//	map<int, string> m;
//	m.insert({ {1, "one"}, {2, "two"}, {3, "three"} });
//	m.insert(pair<int, string>(4, "four"));
//	m.insert(pair<int, string>(5, "five"));
//	printMap(m);
//
//	cout << "Size: " << m.size() << endl;
//	cout << "Max Size: " << m.max_size() << endl;
//	cout << "Is Empty: " << (m.empty() ? "Yes" : "No") << endl;
//
//	map<int, string> m1;
//	m1.swap(m);		//交换两个map的内容
//	printMap(m1);
//
//}
//
////插入与删除操作
//void test2() {
//
//	//插入操作
//	map<int, string> m;
//	m.insert({ {1, "one"},{2,"two"}});
//	m.insert(map<int, string>::value_type(3, "three"));
//	m.insert(pair<int, string>(4, "four"));
//	m.insert(make_pair(5, "five"));
//	m[6] = "six"; //如果key已存在,则覆盖原有的value
//	printMap(m);
//
//	//删除操作
//	m.erase(m.begin()); //删除迭代器指向的元素
//	printMap(m);
//	m.erase(3); //删除key为3的元素
//	printMap(m);
//	m.erase(m.find(4)); //删除key为4的元素
//	m.erase(m.begin(), m.find(5)); //删除key小于5的所有元素
//	printMap(m);
//
//	//清空map
//	m.erase(m.begin(), m.end());
//	m.clear();
//}
//
////查找与统计操作
//void test3() {
//
//	map<int, string> m;
//	m.insert({ {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"} });
//	printMap(m);
//
//	//查找操作
//	auto it = m.find(3); //查找key为3的元素
//	if (it != m.end()) {
//		cout << "Found: Key: " << it->first << "\tValue: " << it->second << endl;
//	} else {
//		cout << "Key not found." << endl;
//	}
//	//统计操作
//	int count = m.count(2); //统计key为2的元素个数
//	if (count > 0) {
//		cout << "Key exists, count: " << count << endl;
//	} else {
//		cout << "Key does not exist." << endl;
//	}
//}
//
////排序操作
//void test4() {
//
//	map<int, string,MyCompare> m;
//	m.insert({ {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"} });
//	printMap(m);
//
//	
//
//}
//int main() {
//	test4();
//	return 0;
//}