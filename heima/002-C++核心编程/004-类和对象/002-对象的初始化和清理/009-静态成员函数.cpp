#include <iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量


class Person {
public:

	static void func() {
		m_A = 100;
		/*m_B = 200;*/
		cout << "123" << endl;
	}

	static int m_A;
	int m_B;

private:
	void func2() {
		cout << "321" << endl;
	}
};

int Person::m_A = 0;

void test01() {
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func;
}

void test02() {
	
}

int main() {

	test01();
	test02();

	return 0;
}