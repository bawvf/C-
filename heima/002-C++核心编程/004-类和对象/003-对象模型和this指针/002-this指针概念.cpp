#include <iostream>
using namespace std;

//1解决名称冲突
//2返回对象本身用*this


class Person {
public:

	Person(int age) {
		//this指针指向 被调用的成员函数所属的对象
		this->age = age;
	}

	Person& PersonAddAge(Person& p) {
		this->age += p.age;

		//this指 向p2的指针，而*this指 向的就是p2这个对象本体
		return *this;
	}

	int age;
};

//1解决名称冲突
void test01() {
	
	Person p1(18);
	cout << p1.age << endl;

}

//2返回对象本身用*this
void test02() {
	Person p1(10);
	Person p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << p2.age << endl;
}

int main() {

	test01();
	test02();

	return 0;
}