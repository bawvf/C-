int& ref = test01();

	cout << ref << endl; #include <iostream>
		using namespace std;

	int main() {
		//�����﷨
		//�������� &���� = ԭ��

		int a = 10;
		//��������
		int& b = a;

		cout << b << endl;

		b = 100;

		cout << a << endl;

		return 0;
	}