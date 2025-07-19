#include <iostream>
using namespace std;
const double PI = 3.141;

class Round {
public:
	int m_r;
	double calculateArea() const{
		return PI * 2 * m_r;
	}
};

class Student {
public:
	string name;
	string id;
};
int main1() {

	Round r;
	int r1 = r.m_r = 10;
	cout << r.calculateArea() << endl;

	Student s;
	string rs = s.name = "zhangsan";
	string rid = s.id = "123456";
	cout << "name: " << s.name << ", id: " << s.id << endl;



	return 0;
}