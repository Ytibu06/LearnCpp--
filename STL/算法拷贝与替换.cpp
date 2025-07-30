//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
////常见的拷贝与替换算法
//
//
////copy()元素拷贝
//void test_copy() {
//
//    vector<int> source = {1, 2, 3, 4, 5};
//    vector<int> destination(5);
//    copy(source.begin(), source.end(), destination.begin());
//    for (int i : destination) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//
////replace()元素替换
//void test_replace() {
//    vector<int> vec = {1, 2, 3, 4, 5};
//    replace(vec.begin(), vec.end(), 3, 99);
//    for (int i : vec) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
////replace_if()条件替换
//void test_replace_if() {
//    vector<int> vec = {1, 2, 3, 4, 5};
//    replace_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }, 99);
//    for (int i : vec) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//
////replace_copy()元素拷贝并替换
//void test_replace_copy() {
//    vector<int> source = {1, 2, 3, 4, 5};
//    vector<int> destination(5);
//    replace_copy(source.begin(), source.end(), destination.begin(), 3, 99);
//    for (int i : destination) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//
////swap()交换元素
//void test_swap() {
//    vector<int> vec1 = {1, 2, 3};
//    vector<int> vec2 = {4, 5, 6};
//    swap(vec1, vec2);
//    for (int i : vec1) {
//        cout << i << " ";
//    }
//    cout << endl;
//    for (int i : vec2) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//int main() {
//	test_copy();
//	test_replace();
//	test_replace_if();
//	test_replace_copy();
//	test_swap();
//	return 0;
//}