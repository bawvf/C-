#pragma once
#include <iostream>
using namespace std;

#include "point.h"

//Բ��
class Circle {
public:
void setR(int r);


//����Բ��
	void setCenter(Point center);


//��ȡԲ��
	Point getCenter();

	int getR();

private:
int m_R;
Point m_Center;
};