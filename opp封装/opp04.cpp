#include <iostream>
using namespace std;

class Person {

    int m_age;

public:
    Person() {
        cout << "无参构造" << endl;
    }

    Person(int a) {
        m_age = a;
        cout << "有参构造" << endl;
    }

    Person(const Person & p) {
        cout << "拷贝构造" << endl;
    }
};

//调用
int main4() {
    //括号法
    Person p1; // 调用无参构造函数
    Person p2(20); // 调用有参构造函数
    Person p3(p1); // 调用拷贝构造函数

    //注意：Person p();  // 会被系统认为是 一个函数声明，而不是对象创建

    //显示法
    Person p4 ; // 调用无参构造函数
    Person p5 = Person(30); // 调用有参构造函数
    Person p6 = Person(p2); // 调用拷贝构造函数

    //注意：Person(10); // 执行后，系统会立即回收匿名对象
    //注意: Person(p3); // 不要使用拷贝构造函数创建匿名对象，因为它会导致资源浪费(重定义)

    //隐式转换
    Person p7 = 40; // 调用有参构造函数，隐式转换 Person p7 = Person(40);
    Person p8 = p1; // 调用拷贝构造函数，隐式转换 Person p8 = Person(p1);

    return 0;
}