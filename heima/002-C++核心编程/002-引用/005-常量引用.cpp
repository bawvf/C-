int& ref = test01();

	cout << ref << endl; #include <iostream>
		using namespace std;

	int main() {
		//基本语法
		//数据类型 &别名 = 原名

		int a = 10;
		//创建引用
		int& b = a;

		cout << b << endl;

		b = 100;

		cout << a << endl;

		return 0;
	}