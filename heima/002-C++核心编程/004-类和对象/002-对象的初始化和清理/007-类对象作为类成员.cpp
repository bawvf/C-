#include <iostream>
using namespace std;

//�ֻ���
class Phone {
public:

	Phone(string name) {
		m_PNmae = name;
	}

	//�ֻ�Ʒ��
	string m_PNmae;
};

//����
class Person {
public:

	/*Person(string name, string pname): m_Name(name), m_Phone(pname) {}*/

	Person(string name, string pname) {
		m_Name = name;
		m_Phone.m_PNmae = pname;
	}

	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;

};

void test01() {
	Person p("����", "ƻ��");

	cout << p.m_Name << p.m_Phone.m_PNmae << endl;
}


int main() {

	test01();

	return 0;
}