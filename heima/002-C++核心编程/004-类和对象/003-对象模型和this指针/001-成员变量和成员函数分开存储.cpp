#include <iostream>
using namespace std;

class Person {
	int m_A;			//�Ǿ�̬��Ա����������Ķ�����	
	static int m_B;		// ��̬��Ա����I�������������

	void func() {}		//�Ǿ�̬��Ա�����������������
	static void func2() {}	//��̬��Ա�����������������
};

int Person::m_B = 0;

void test01() {
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ: 1
	//C++������ ���ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << sizeof(p) << endl;
}

void test02() {
	Person p;

	cout << sizeof(p) << endl;
}

int main() {

	test01();
	test02();

	return 0;
}