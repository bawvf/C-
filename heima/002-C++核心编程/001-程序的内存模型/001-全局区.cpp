#include <iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;

//const���ε�ȫ�ֳ���
const int c_g_a = 10;

int main() {

	//ȫ����

	//ȫ�ֱ��� ��̬���� ����

	//������ͨ�ֲ�����
	int a = 10;

	//��̬����
	static int s_a = 10;

	//����
	//�ַ�������
	cout << "�ַ���������ַ" << (int)&"Hello World" << endl;

	//const���εľֲ�����
	const int c_l_a = 10;

	cout << "�ֲ�����a�ĵ�ַ" << (int) & a << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ" << (int) & g_a << endl;
	cout << "��̬����s_a�ĵ�ַ" << (int)&s_a << endl;
	cout << "ȫ�ֳ���c_g_a�ĵ�ַ" << (int)&c_g_a << endl;
	cout << "�ֲ�����c_l_a�ĵ�ַ" << (int)&c_l_a << endl;

	return 0;
}