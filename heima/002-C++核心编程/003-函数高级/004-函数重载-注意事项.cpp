#include <iostream>
using namespace std;

//�������ص�ע������
//1�� ������Ϊ���ص�����
void func(int &a) {
	cout << "����(int &a)����" << endl;
}

void func(const int &a) {
	cout << "����(const int &a)����" << endl;
}
//2��������������Ĭ�ϲ���
void func2(int a, int b = 10) {
	cout << "����(int a, int b)����" << endl;
}

void func2(int a) {
	cout << "����(int a)����" << endl;
}

int main() {
	int a = 10;
	func(a);

	func(10);

	func2(10);
	

	return 0;
}