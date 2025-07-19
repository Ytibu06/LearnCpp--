#include <iostream>
using namespace std;
#include "point.h"
#include "round.h"

////����
//class Point {
//private:
//	int x;
//	int y;
//
//public:
//	void setX(int m_x) {
//		x = m_x;
//	}
//	int getX() {
//		return x;
//	}
//
//	void setY(int m_y) {
//		y = m_y;
//	}
//	int getY() {
//		return y;
//	}
//};

//// Բ��
//class Round {
//private:
//	int radius;
//
//	Point center; // Center of the circle
//
//public:
//
//	void setRadius(int m_r) {
//		radius = m_r;
//	}
//	int getRadius() {
//		return radius;
//	}
//
//	void setCenter(Point m_center) {
//		center = m_center;
//	}
//	Point getCenter() {
//		return center;
//	}
//
//};

//����Բ�Ĺ�ϵ
void isInCircle(Round &r, Point &p) {
	
	int dis = (r.getCenter().getX() - p.getX()) * (r.getCenter().getX() - p.getX()) +
		(r.getCenter().getY() - p.getY()) * (r.getCenter().getY() - p.getY());
	int radisus = r.getRadius() * r.getRadius();

	if (dis == radisus) {
		cout << "����Բ��" << endl;
	}else if (dis < radisus) {
		cout << "����Բ��" << endl;
	} else {
		cout << "����Բ��" << endl;
	}
	
}

int main2() {
	//����Բ����
	Round r;
	r.setRadius(10);
	Point center;
	center.setX(10);
	center.setY(10);
	r.setCenter(center);

	//���������
	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(r, p);

	return 0;

}