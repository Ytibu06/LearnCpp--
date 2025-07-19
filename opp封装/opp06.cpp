#include  <iostream>
using namespace std;
class Student {
public:
	Student() {
		cout << "Default constructor" << endl;
	}

	Student(int id,int height){
		this->id = id;
		m_Height = new int(height);
		
		cout << "Copy constructor" << endl;
	}

	Student(const Student & s) {
		
		this->id = s.id;

		if(s.m_Height != NULL) {
			m_Height = new int(*s.m_Height);
		} else {
			m_Height = NULL;
		}

		cout << "Copy constructor" << endl;
	}


	~Student() {
		if(m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Destructor" << endl;
	}

	int id;
	int* m_Height;
};
void main6() {

	Student s1(1, 180);
	Student s2(s1);

}