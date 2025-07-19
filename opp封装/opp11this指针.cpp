#include <iostream>
using namespace std;

namespace opp11 {
    class Person11 {
    public:
        Person11(int age) {
            this->age = age;
        }
        int age;
        Person11& PersonAddAge(Person11& p) {
            this->age += p.age;
            return *this;
        }
    };

    // 使用静态函数避免全局冲突
    static void test11() {
        Person11 p(18);
        cout << "p1 age is " << p.age << endl;
    }

    static void test11_2() {
        Person11 p1(16);
        Person11 p2(10);
        p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
        cout << "p2 age is " << p2.age << endl;
    }
}

int main11() {
    opp11::test11_2();
    return 0;
}