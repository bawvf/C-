#include <iostream>
using namespace std;

//立方体类设计
//1、创建立方体类
//2、设计属性
//3、设计行为获取立方体面积和体积
//4、分别利用全局函数和成员函数判断两个立方体是否相等

class Cube {
public:
	//设置长
	void setL(int l) {
		m_L = l;
	}
	//获取长
	int getL() {
		return m_L;
	}

	//设置宽
	void setW(int w) {
		m_W = w;
	}
	//获取宽
	int getW() {
		return m_W;
	}

	//设置高
	void setH(int h) {
		m_H = h;
	}
	//获取高
	int getH() {
		return m_H;
	}

	//获取立方体面积
	int calculateS() {
		return 2 * m_L + 2 * m_H + 2 * m_W;
	}

	//获取立方体体积
	int calculateV() {
		return m_H * m_L * m_W;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube& c) {
		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
			return true;
		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) {
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) 
		return true;
		
	return false;
}



int main() {

	Cube c1;

	c1.setL(10);
	c1.setH(10);
	c1.setW(10);

	cout << c1.calculateS() << endl;

	cout << c1.calculateV() << endl;

	Cube c2;

	c2.setL(10);
	c2.setH(10);
	c2.setW(10);

	//利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret)
		cout << "相等" << endl;
	else
		cout << "不相等" << endl;

	//利用成员函数判断
	ret = c1.isSameByClass(c2);
		if (ret)
			cout << "相等" << endl;
		else
			cout << "不相等" << endl;

	return 0;
}

