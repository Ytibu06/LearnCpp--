//#include <map>
//#include <iostream>
//using namespace std;
////map/multimap��������������ʹ��
////�ص㣺
////����Ԫ�ض���pair����,��һ��Ϊkey,�ڶ���Ϊvalue,���ݼ�ֵ�Զ�����
////map��key�����ظ�,��������ظ���key,�򸲸�ԭ�е�value
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
//		return a < b ? true:false; //Ĭ����������
//	}
//};
////���캯���븳ֵ����
//void test() {
//
//	//Ĭ�Ϲ���
//	map<int, string> m;
//	m.insert({ {1, "one"}, {2, "two"}, {3, "three"} });
//	m.insert(pair<int, string>(4, "four"));
//	m.insert(pair<int, string>(5, "five"));
//	printMap(m);
//
//	//��������
//	map<int, string> m1(m);
//	printMap(m1);
//
//	//��ֵ
//	map<int, string> m2;
//	m2 = m;
//	printMap(m2);
//}
//
////��С����
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
//	m1.swap(m);		//��������map������
//	printMap(m1);
//
//}
//
////������ɾ������
//void test2() {
//
//	//�������
//	map<int, string> m;
//	m.insert({ {1, "one"},{2,"two"}});
//	m.insert(map<int, string>::value_type(3, "three"));
//	m.insert(pair<int, string>(4, "four"));
//	m.insert(make_pair(5, "five"));
//	m[6] = "six"; //���key�Ѵ���,�򸲸�ԭ�е�value
//	printMap(m);
//
//	//ɾ������
//	m.erase(m.begin()); //ɾ��������ָ���Ԫ��
//	printMap(m);
//	m.erase(3); //ɾ��keyΪ3��Ԫ��
//	printMap(m);
//	m.erase(m.find(4)); //ɾ��keyΪ4��Ԫ��
//	m.erase(m.begin(), m.find(5)); //ɾ��keyС��5������Ԫ��
//	printMap(m);
//
//	//���map
//	m.erase(m.begin(), m.end());
//	m.clear();
//}
//
////������ͳ�Ʋ���
//void test3() {
//
//	map<int, string> m;
//	m.insert({ {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"} });
//	printMap(m);
//
//	//���Ҳ���
//	auto it = m.find(3); //����keyΪ3��Ԫ��
//	if (it != m.end()) {
//		cout << "Found: Key: " << it->first << "\tValue: " << it->second << endl;
//	} else {
//		cout << "Key not found." << endl;
//	}
//	//ͳ�Ʋ���
//	int count = m.count(2); //ͳ��keyΪ2��Ԫ�ظ���
//	if (count > 0) {
//		cout << "Key exists, count: " << count << endl;
//	} else {
//		cout << "Key does not exist." << endl;
//	}
//}
//
////�������
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