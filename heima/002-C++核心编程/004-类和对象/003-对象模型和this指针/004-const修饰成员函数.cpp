#include <iostream>
using namespace std;

class Person {
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	void showPerson() const {
		m_A = 100;
		m_B = 100;
	}

	void func() {

	}
	
	int m_A;
	mutable int m_B;	//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};

void test01() {
	Person p;
	p.showPerson();
}

//������
void test02() {
	const Person p;
	p.m_A = 100;
	p.m_B = 100;

	//������ֻ�ܵ��ó�����
	p.showPerson();
}

int main() {

	test01();
	test02();

	return 0;
}