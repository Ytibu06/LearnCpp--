//
// Created by Administrator on 25-7-8.
//友元：全局函数做友元
//
/*
#include <iostream>
using namespace std;

class Building {
    //声明goodBye全局函数是Building的友元，可以访问类中的私有成员
    friend void goodBye(Building* building);
public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};

void goodBye(Building* building) {
    cout << "正在访问：" << building->m_SittingRoom << endl;
    cout << "正在访问:" << building->m_BedRoom << endl;
}
void test() {
    Building b;
    goodBye(&b);
}

int main14() {
    test();
    return 0;
}
*/