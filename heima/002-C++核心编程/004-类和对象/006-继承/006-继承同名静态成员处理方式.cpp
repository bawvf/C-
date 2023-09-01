#include <iostream>
using namespace std;

class Base {
public:
	static int m_A;

	static void func() {
		cout << "Base - static void func()" << endl;
	}
	static void func(int a) {
		cout << "Son - static void func(int a)" << endl;
	}
};

int Base::m_A = 100;

class Son : public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son - static void func()" << endl;
	}
};

int Son::m_A = 200;

//ͬ����̬��Ա����
void test01() {
	//1�� ͨ�����������
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;

	cout << "------------------" << endl;

	//2��ͨ����������
	cout << Son::m_A << endl;
	//��һ��::����ͨ��������ʽ���ʵڶ���::������ʸ�����������
	cout << Son::Base::m_A << endl;

}

//ͬ����̬��Ա����
void test02() {
	//1�� ͨ�����������
	Son s;
	s.func();
	s.Base::func();

	cout << "------------------" << endl;

	//2��ͨ����������
	Son::func();
	Son::Base::func();

	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	// �������ʸ����б�����ͬ����Ա����Ҫ��������
	Son::Base::func(12);
}

int main() {

	//test01();

	test02();

	return 0;
}