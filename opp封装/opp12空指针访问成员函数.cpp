//
// Created by Administrator on 25-7-8.
//
#include <iostream>
using namespace std;
class Person {
public:
    void showClassName() {
        cout << "showClassName:" << endl;
    }
    //报错:传入指针为NULL
    void showPersonAge() {
        if (this == NULL) {
            return;
        }
        cout << "showPersonAge:" << this->age << endl;
    }

    int age;

};
int main12() {
    Person* p = NULL;
    p->showClassName();
    p->showPersonAge();

    Person* p1 = NULL;
    p1->showClassName();
    p1->showPersonAge();

    return 0;
}