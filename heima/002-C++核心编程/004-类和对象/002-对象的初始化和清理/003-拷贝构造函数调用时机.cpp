#include <iostream>
using namespace std;

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
	Person(const Person &p) {
		m_age = p.m_age;
	}

	int m_age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);
	Person p2(p1);
}
//2、值传递的方式给函数参数传值
void doWork(Person p) {

}

void test02() {
	Person p;
	doWork(p);
}
// 3、值方式返回局部对象
Person doWork2() {
	Person p1;
	return p1;
}
void test03() {
	Person p = doWork2();

}

int main() {

	test01();

	return 0;
}