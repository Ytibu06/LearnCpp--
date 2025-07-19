#include <iostream>
#include <string>
using namespace std;
//string¸³Öµ²Ù×÷
/*
* string& operator=(const char* s);		//char*ÀàÐÍ¸³Öµ¸øµ±Ç°×Ö·û´®
* string& operator=(const string& s);	//×Ö·û´®s¸³Öµ¸øµ±Ç°×Ö·û´®
* string& operator=(char c);			//×Ö·û¸³Öµ¸ø×Ö·û´®
* string& assign(const char* s);		//×Ö·û´®s¸´ÖÆ¸ø×Ö·û´®
* string& assign(const char* s, int n);	//×Ö·û´®sµÄÇ°n¸ö×Ö·û´®¸³Öµ¸ø×Ö·û´®
* string& assign(const string &s);		//×Ö·û´®s¸´ÖÆ¸ø×Ö·û´®
* string& assign(int n, char c);		//n¸ö×Ö·ûc¸³Öµ¸ø×Ö·û´®
*/

/*
void test() {

	const char* p = "hello world";
	string str;
	str = p;
	cout << str << endl;

	const string& p1 = "hello world";
	string str2 = p1;
	cout << str2 << endl;

	string str3;
	str3 = 'h';
	cout << str3 << endl;

	string str4;
	str4.assign("hello");
	cout << str4 << endl;

	string str5;
	str5.assign("hello world", 5); // Ö»¸´ÖÆÇ°3¸ö×Ö·û
	cout << str5 << endl;

	string str6;
	str6.assign(str4); // ¸´ÖÆÕû¸ö×Ö·û´®
	cout << str6 << endl;

	string str7;
	str7.assign(5, 'x'); // ¸³Öµ5¸ö×Ö·û'x'
	cout << str7 << endl;

}
int main() {
	test();
	return 0;
}
*/

