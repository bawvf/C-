#include <iostream>
using namespace std;

class Person {
public:
	//this指针的本质 是指针常量 指针的指向是不可以修改的
	void showPerson() const {
		m_A = 100;
		m_B = 100;
	}

	void func() {

	}
	
	int m_A;
	mutable int m_B;	//特殊变量，即使在常函数中，也可以修改这个值
};

void test01() {
	Person p;
	p.showPerson();
}

//常对象
void test02() {
	const Person p;
	p.m_A = 100;
	p.m_B = 100;

	//常对象只能调用常函数
	p.showPerson();
}

int main() {

	test01();
	test02();

	return 0;
}