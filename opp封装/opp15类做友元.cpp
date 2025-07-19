//
// Created by Administrator on 25-7-8.
//类做友元
#include <iostream>
using namespace std;

class Building;
class GoodBye {
public:
    Building* building;

    GoodBye();
    void visit();
};

class Building {
    friend class GoodBye;
public:
    string m_SittingRoom;
private:
    string m_BedRoom;

public:
    Building();


};
//类外创建函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
};

GoodBye::GoodBye() {
    building = new Building;
};

void GoodBye::visit() {
    cout << "GoodBye正在访问：" << building->m_SittingRoom << endl;
    cout << "GoodBye正在访问：" << building->m_BedRoom << endl;
}

void  test() {
    GoodBye gg;
    gg.visit();
}

int main15() {
    test();
    return 0;
}