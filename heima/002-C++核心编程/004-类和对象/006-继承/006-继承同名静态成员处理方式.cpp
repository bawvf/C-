#include <iostream>
using namespace std;

class Base {
public:
	static int m_A;

	static void func() {
		cout << "Base - static void func()" << endl;
	}
	static void func(int a) {
		cout << "Son - static void func(int a)" << endl;
	}
};

int Base::m_A = 100;

class Son : public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son - static void func()" << endl;
	}
};

int Son::m_A = 200;

//同名静态成员属性
void test01() {
	//1、 通过对象象访问
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;

	cout << "------------------" << endl;

	//2、通过类名访问
	cout << Son::m_A << endl;
	//第一个::代表通过类名方式访问第二个::代表访问父类作用域下
	cout << Son::Base::m_A << endl;

}

//同名静态成员函数
void test02() {
	//1、 通过对象象访问
	Son s;
	s.func();
	s.Base::func();

	cout << "------------------" << endl;

	//2、通过类名访问
	Son::func();
	Son::Base::func();

	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
	// 如果想访问父类中被隐藏同名成员，需要加作用域
	Son::Base::func(12);
}

int main() {

	//test01();

	test02();

	return 0;
}