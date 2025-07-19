#pragma once
#include <iostream>
using namespace std;
#include "point.h"

// ‘≤¿‡
class Round {
private:
	int radius;

	Point center; // Center of the circle

public:

	void setRadius(int m_r);
	int getRadius();

	void setCenter(Point m_center);
	Point getCenter();

};
