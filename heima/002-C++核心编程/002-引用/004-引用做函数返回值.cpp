#include <iostream>
using namespace std;

void showValue(int& b) {
	cout << b << endl;
}

int main() {

	//常量引用
	//使用场景:用来修饰形参，防止误操作
	int a = 10;

	// 加上const之后编译器将代码修改int temp = 10; const int& ref = temp;
	const int &ref = 10;

	int b = 20;
	showValue(b);

	return 0;
}