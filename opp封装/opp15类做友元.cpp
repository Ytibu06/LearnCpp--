//
// Created by Administrator on 25-7-8.
//������Ԫ
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
//���ⴴ������
Building::Building() {
    m_SittingRoom = "����";
    m_BedRoom = "����";
};

GoodBye::GoodBye() {
    building = new Building;
};

void GoodBye::visit() {
    cout << "GoodBye���ڷ��ʣ�" << building->m_SittingRoom << endl;
    cout << "GoodBye���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void  test() {
    GoodBye gg;
    gg.visit();
}

int main15() {
    test();
    return 0;
}