#include <iostream>
using namespace std;

// �Զ�������
class MyInteger {

	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger() {
		m_Num = 0;
	}

	//����ǰ��++�����
	MyInteger &operator++() {
		m_Num++;
		return *this;
	}
	//���غ� ��++�����
	//void operator++(int) int����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int) {
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

// ���� << �����
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;

	cout << ++myint << endl;

	cout << myint++ << endl;
}


int main() {
	test01();

	return 0;
}