#include <iostream>
using namespace std;

class Person {

	friend ostream& operator<<(ostream& cout, Person& p);
	friend void test01();

public:

	//���ó�Ա������������������

private:
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &cout, Person &p) {	//���� operator<< (cout ��p) ��cout << p
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