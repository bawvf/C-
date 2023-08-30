#include <iostream>
using namespace std;

//打印输出类
class MyPrint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}
};

void test01() {
	MyPrint myprint;
	myprint("Hello");
}

int main() {

	test01();

	return 0;
}