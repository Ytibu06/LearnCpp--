#include "Teacher.h"
#include <windows.h>

// 默认构造函数
Teacher::Teacher() {

}

// 有参构造
Teacher::Teacher(int empId, string name, string pwd) {

    this->empId = empId; // 设置工号
	this->Name = name; // 设置姓名
	this->Pwd = pwd;   // 设置密码
	
}

// 操作菜单
void Teacher::operMenu() {

    cout << "\t欢迎教师：" << this->Name << "登录！" << endl;
    // 顶部UI
    cout << "\t=============================================\n";
    cout << "\t|         预约管理系统 (v1.0)              |\n";
    cout << "\t=============================================\n";
    // 菜单选项
    cout << "  \t              1. 查看所有预约              \n";
    cout << "  \t              2. 审核预约                  \n";
    cout << "  \t              0. 注销登录                  \n";
    cout << "\t---------------------------------------------\n";

    cout << "\n\t请选择操作: ";
}

// 查看所有预约
void Teacher::showAllOrder() {

    OrderFile of;
    if (of.m_Size == 0) {
        cout << "无预约记录" << endl;
        system("pause");
        system("cls");
        return;
    }
    for (int i = 0; i < of.m_Size; i++) {
        cout << i + 1 << "、";
        cout << "预约日期：周" << of.m_orderData[i]["date"];
        cout << " 时间段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
        cout << " 学号：" << of.m_orderData[i]["stuId"];
        cout << " 姓名：" << of.m_orderData[i]["stuName"];
        cout << " 机房编号：" << of.m_orderData[i]["roomId"];
        string status = " 状态";
        if (of.m_orderData[i]["status"] == "1") {
            status += "审核中";
        }
        else if (of.m_orderData[i]["status"] == "2") {
            status += "预约成功";
        }
        else if (of.m_orderData[i]["status"] == "-1") {
            status += "预约失败";
        }
        else {
            status += "已取消";
        }
        cout << status << endl;

    }
    system("pause");
    system("cls");
}

//审核预约
void Teacher::validOrder() {

    OrderFile of;
    if (of.m_Size == 0) {
        cout << "无预约记录" << endl;
        system("pause");
        system("cls");
        return;
    }

    vector<int> v;
    int index = 0;
    cout << "待审核记录如下所示：" << endl;
    for (int i = 0; i < of.m_Size; i++) {
        if (of.m_orderData[i]["status"] == "1") {
            v.push_back(i);
            cout << ++index << " 、";
            cout << "预约日期：周" << of.m_orderData[i]["date"];
            cout << " 时间段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
            cout << " 学号：" << of.m_orderData[i]["stuId"];
            cout << " 姓名：" << of.m_orderData[i]["stuName"];
            cout << " 机房编号：" << of.m_orderData[i]["roomId"];
            string status = " 状态";
            if (of.m_orderData[i]["status"] == "1") {
                status += "审核中";
            }
            else if (of.m_orderData[i]["status"] == "2") {
                status += "预约成功";
            }
            else if (of.m_orderData[i]["status"] == "-1") {
                status += "预约失败";
            }
            else {
                status += "已取消";
            }
            cout << status << endl;

        }
    }
    cout << "输入审核预约记录，0代表返回" << endl;
    int select = 0;
    int ret = 0;
    while (true) {
        cin >> select;
        if (select >= 0 && select <= v.size()) {
            if (select == 0) {
                break;
            }
            else {
                cout << "输入审核结果" << endl;
                cout << "1、不通过" << endl;
                cout << "2、通过" << endl;
                cin >> ret;
                if (ret == 1) {
                    of.m_orderData[v[select - 1]]["status"] = "2";
                }
                else if (ret == 2) {
                    of.m_orderData[v[select - 1]]["status"] = "-1";
                }
                else {
                    cout << "输入错误，请重试" << endl;
                }
                of.updateOrder();
                cout << "审核结束" << endl;
                break;
            }
        }
        cout << "输入错误，请重新输入" << endl;
    }
    system("pause");
    system("cls");
}