#include <iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����


class Person {
public:

	static void func() {
		m_A = 100;
		/*m_B = 200;*/
		cout << "123" << endl;
	}

	static int m_A;
	int m_B;

private:
	void func2() {
		cout << "321" << endl;
	}
};

int Person::m_A = 0;

void test01() {
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func;
}

void test02() {
	
}

int main() {

	test01();
	test02();

	return 0;
}