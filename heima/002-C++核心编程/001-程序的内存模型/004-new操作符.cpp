#include <iostream>
using namespace std;

//1.new的基本语法
int* func() {
	//在堆区创建整型数据
	int* p = new int(10);

	//释放堆区数据，用delete
	//delete p;

	return p;
}

//2.在堆区利用new开辟数组
void test02() {
	//创建一个 10整型数组
	int* arr = new int[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//释放堆区数组
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