#include <iostream>
#include "point.h"
#include "circle.h"
using namespace std;


////����
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//	int getX() {
//		return m_X;
//	}
//
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY() {
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

////Բ��
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//
//	//����Բ��
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//
//	//��ȡԲ��
//	Point getCenter() {
//		return m_Center;
//	}
//	int getR() {
//		return m_R;
//	}
//
//private:
//	int m_R;
//	Point m_Center;
//};

//�жϵ��Բ��ϵ
void isInCircle(Circle& c, Point& p) {
	//��������֮�����ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ

	if (distance == rDistance)
		cout << "����Բ��" << endl;
	else if (distance > rDistance)
		cout << "����Բ��" << endl;
	else
		cout << "����Բ��" << endl;

}

int main() {

	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	isInCircle(c, p);

	return 0;
}