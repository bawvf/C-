#include <iostream>
using namespace std;

// #include "Person.h"
#include "007-Person.cpp"

//第二种解决方式，将. h和. cpp中的内容写到一起，将后缀名改为. hpp文件

//template<class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << this->m_Name << this->m_Age << endl;
//}

void test01() {
	Person<string, int>p("Jerry", 18);
	p.showPerson();
}

int main() {

	test01();

	//test02();

	//test03();

	return 0;
} 