//#include <iostream>
//#include <list>
//using namespace std;
////list��˫��ѭ����������ʹ��
//
//template<typename T>
//void printList(const list<T>& L) {
//	for (typename list<T>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
////���캯��
//void test() {
//
//	//Ĭ�Ϲ���
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//���俽������
//	list<int> l1(l.begin(), l.end());
//	printList(l1);
//
//	//n��Ԫ�ؿ���
//	list<string> l2(5, "hello");
//	printList(l2);
//
//	//��������
//	list<int> l3(l);
//	printList(l3);
//}
//
////��ֵ����
//void test1() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//assign()���俽����ֵ
//	list<int> l1;
//	l1.assign(l.begin(), l.end());
//	printList(l1);
//	
//	//assign()n��Ԫ�ظ�ֵ
//	list<string> l2;
//	l2.assign(3, "hello");
//	printList(l2);
//
//	//���ظ�ֵ�����
//	list<int> l3;
//	l3 = l;
//	printList(l3);
//
//	//swap()�������ݽ���
//	list<int> l4;
//	l4.swap(l);
//	printList(l4);
//	printList(l);
//
//}
//
////��С����
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
////����ɾ������
//void test3() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//β�����
//	l.push_back(99);
//	printList(l);
//	//β��ɾ��
//	l.pop_back();
//	printList(l);
//
//	//ͷ������
//	l.push_front(-99);
//	printList(l);
//	//ͷ��ɾ��
//	l.pop_front();
//	printList(l);
//
//	//insert()λ�ò���
//	l.insert(l.begin(), 99);
//	printList(l);
//	l.insert(l.begin(), 1, 99);	//ָ��λ�ò���n��ָ��Ԫ��
//	printList(l);
//
//	//erease()ɾ������
//	l.erase(l.begin());		//ɾ��ָ��λ��Ԫ��
//	printList(l);
//	l.erase(l.begin(), l.end() );	//ɾ������Ԫ��
//	printList(l);
//
//	//remove�Ƴ����е�elemԪ��
//	l.remove(10);	//ɾ������ƥ��Ԫ��
//	printList(l);
//
//	//���
//	l.clear();
//	printList(l);
//
//}
//
////���ݴ�ȡ
//void test4() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//����
//	cout << "Front: " << l.front() << endl;
//	//��β
//	cout << "Back: " << l.back() << endl;
//
//}
//
////�����뷴ת
//void test5() {
//
//	list<int> l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	printList(l);
//
//	//����תreverse()
//	l.reverse();
//	printList(l);
//
//	//��������sort()Ĭ������
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