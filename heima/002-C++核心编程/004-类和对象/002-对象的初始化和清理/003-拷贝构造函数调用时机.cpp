#include <iostream>
using namespace std;

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
	Person(const Person &p) {
		m_age = p.m_age;
	}

	int m_age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
	Person p1(20);
	Person p2(p1);
}
//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p) {

}

void test02() {
	Person p;
	doWork(p);
}
// 3��ֵ��ʽ���ؾֲ�����
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