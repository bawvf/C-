#include <iostream>
using namespace std;

//构造函数的调用规则
//1、创建一个类，C++编译器会给每个类都添加至少3个函数
//默认构造  (空实现)
//析构函数	(空实 现)
// 拷贝构造	(值拷贝)

//2、如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造


class Person {
public:
	Person() {
		cout << "构造函数的调用" << endl;
	}
	Person(int age) {
		m_age = age;
	}

	~Person() {
		cout << "析构函数的调用" << endl;
	}
	Person(const Person& p) {
		m_age = p.m_age;
	}

	int m_age;
};

void test01() {
	Person p;
	p.m_age = 19;

	Person p2(p);

	cout << p2.m_age << endl;
}

int main() {

	test01();

	return 0;
}