#include <iostream>
using namespace std;

// 自定义整型
class MyInteger {

	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger() {
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger &operator++() {
		m_Num++;
		return *this;
	}
	//重载后 置++运算符
	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int) {
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

// 重载 << 运算符
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;

	cout << ++myint << endl;

	cout << myint++ << endl;
}


int main() {
	test01();

	return 0;
}