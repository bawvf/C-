#include "circle.h"

//Բ��

	void Circle::setR(int r) {
		m_R = r;
	}

	//����Բ��
	void Circle::setCenter(Point center) {
		m_Center = center;
	}

	//��ȡԲ��
	Point Circle::getCenter() {
		return m_Center;
	}
	int Circle::getR() {
		return m_R;
	}
