#include <iostream>
using namespace std;

class Person {

	friend ostream& operator<<(ostream& cout, Person& p);
	friend void test01();

public:

	//利用成员函数重载左移运算行

private:
	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout, Person &p) {	//本质 operator<< (cout ，p) 简化cout << p
	cout << p.m_A << "/" << p.m_B << endl;
}

void test01() {
	Person p;
	p.m_A = 10;
	p.m_B = 10;

	cout << p.m_A;
}


int main() {
	test01();

	return 0;
}