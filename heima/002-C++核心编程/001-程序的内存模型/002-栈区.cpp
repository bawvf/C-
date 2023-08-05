#include <iostream>
using namespace std;

//栈区数据注意事项 --- 不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

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