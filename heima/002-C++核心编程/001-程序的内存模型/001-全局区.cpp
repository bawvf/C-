#include <iostream>
using namespace std;

//全局变量
int g_a = 10;

//const修饰的全局常量
const int c_g_a = 10;

int main() {

	//全局区

	//全局变量 静态变量 常量

	//创建普通局部变量
	int a = 10;

	//静态变量
	static int s_a = 10;

	//常量
	//字符串常量
	cout << "字符串常量地址" << (int)&"Hello World" << endl;

	//const修饰的局部常量
	const int c_l_a = 10;

	cout << "局部变量a的地址" << (int) & a << endl;
	cout << "全局变量g_a的地址" << (int) & g_a << endl;
	cout << "静态变量s_a的地址" << (int)&s_a << endl;
	cout << "全局常量c_g_a的地址" << (int)&c_g_a << endl;
	cout << "局部常量c_l_a的地址" << (int)&c_l_a << endl;

	return 0;
}