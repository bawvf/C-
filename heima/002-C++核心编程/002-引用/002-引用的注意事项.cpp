#include <iostream>
using namespace std;

int main() {
	int a = 10;

	//1�� ���ñ����ʼ��
	//int& b;   //���󣬱����ʼ��
	int& b = a;

	//2�� �����ڳ�ʼ���󣬲����Ըı�
	int c = 20;

	b = c;	//��ֵ�����������Ǹ�������

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}