//
// Created by Administrator on 25-7-8.
//��Ԫ��ȫ�ֺ�������Ԫ
//
/*
#include <iostream>
using namespace std;

class Building {
    //����goodByeȫ�ֺ�����Building����Ԫ�����Է������е�˽�г�Ա
    friend void goodBye(Building* building);
public:
    Building() {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};

void goodBye(Building* building) {
    cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
    cout << "���ڷ���:" << building->m_BedRoom << endl;
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