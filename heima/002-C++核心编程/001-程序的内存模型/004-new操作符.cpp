#include <iostream>
using namespace std;

//1.new�Ļ����﷨
int* func() {
	//�ڶ���������������
	int* p = new int(10);

	//�ͷŶ������ݣ���delete
	//delete p;

	return p;
}

//2.�ڶ�������new��������
void test02() {
	//����һ�� 10��������
	int* arr = new int[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	delete[] arr;
}

void test01() {
	int* p = func();
	cout << *p << endl;
}

int main() {
	test01();
	test02();

	
	


	return 0;
}