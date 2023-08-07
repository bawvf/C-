#pragma once
#include <iostream>
using namespace std;

#include "point.h"

//圆类
class Circle {
public:
void setR(int r);


//设置圆心
	void setCenter(Point center);


//获取圆心
	Point getCenter();

	int getR();

private:
int m_R;
Point m_Center;
};