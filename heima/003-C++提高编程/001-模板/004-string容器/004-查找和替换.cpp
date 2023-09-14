#include <iostream>
using namespace std;
#include <string>

//1.查找
void test01() {
	string str1 = "abcdefg";

	int pos = str1.find("de");

	cout << pos << endl;

	//rfind 和find区别
	//rfind从右往左查找 find从左往右查找
	pos = str1.rfind("de");
	cout << pos << endl;
}

//2.替换
void test02() {
	string str1 = "abcdefg";

	str1.replace(1, 3, "1111");

	cout << str1 << endl;
}

int main() {

	test01();

	test02();

	return 0;
}