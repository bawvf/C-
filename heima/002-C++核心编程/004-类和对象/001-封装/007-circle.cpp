#include "circle.h"

//圆类

	void Circle::setR(int r) {
		m_R = r;
	}

	//设置圆心
	void Circle::setCenter(Point center) {
		m_Center = center;
	}

	//获取圆心
	Point Circle::getCenter() {
		return m_Center;
	}
	int Circle::getR() {
		return m_R;
	}
