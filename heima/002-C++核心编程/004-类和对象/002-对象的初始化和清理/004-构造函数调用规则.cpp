#include <iostream>
using namespace std;

//���캯���ĵ��ù���
//1������һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ���  (��ʵ��)
//��������	(��ʵ ��)
// ��������	(ֵ����)

//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������


class Person {
public:
	Person() {
		cout << "���캯���ĵ���" << endl;
	}
	Person(int age) {
		m_age = age;
	}

	~Person() {
		cout << "���������ĵ���" << endl;
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