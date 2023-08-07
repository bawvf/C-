#include <iostream>
using namespace std;

//设计一个园类 求圆的周长
const double PI = 3.14;

//class 代表设计一个类 类后面就是类名称
class Circle {
	//访问权限
	//公共权限
public:
	//属性

	//半径
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};