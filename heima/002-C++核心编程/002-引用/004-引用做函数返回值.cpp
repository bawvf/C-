#include <iostream>
using namespace std;

void showValue(int& b) {
	cout << b << endl;
}

int main() {

	//��������
	//ʹ�ó���:���������βΣ���ֹ�����
	int a = 10;

	// ����const֮��������������޸�int temp = 10; const int& ref = temp;
	const int &ref = 10;

	int b = 20;
	showValue(b);

	return 0;
}