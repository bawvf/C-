#include <iostream>
using namespace std;

//手机类
class Phone {
public:

	Phone(string name) {
		m_PNmae = name;
	}

	//手机品牌
	string m_PNmae;
};

//人类
class Person {
public:

	/*Person(string name, string pname): m_Name(name), m_Phone(pname) {}*/

	Person(string name, string pname) {
		m_Name = name;
		m_Phone.m_PNmae = pname;
	}

	//姓名
	string m_Name;
	//手机
	Phone m_Phone;

};

void test01() {
	Person p("张三", "苹果");

	cout << p.m_Name << p.m_Phone.m_PNmae << endl;
}


int main() {

	test01();

	return 0;
}