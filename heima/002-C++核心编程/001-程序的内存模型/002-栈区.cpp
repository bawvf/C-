#include <iostream>
using namespace std;

//ջ������ע������ --- ��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�

int* func() {
	int a = 10;
	return &a;
}

int main() {

	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	return 0;
}