#include <iostream>
using namespace std;

template<class NameType, class AgeType = int>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << this->m_Name << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1�� ��ģ��û���Զ������Ƶ�ʹ�÷�ʽ��
void test01() {
	//�����޷����Զ������Ƶ�
	//Person p("�����", 1000);

	Person<string, int>p("�����", 1000);

	p.showPerson();
}

//2�� ��ģ����ģ������б��п�����Ĭ�ϲ���
void test02() {
	Person<string>p("��˽�", 999);

	p.showPerson();
}

int main() {

	test01();

	test02();

	return 0;
}