#include <iostream>
using namespace std;
#include <string>

//1.����
void test01() {
	string str1 = "abcdefg";

	int pos = str1.find("de");

	cout << pos << endl;

	//rfind ��find����
	//rfind����������� find�������Ҳ���
	pos = str1.rfind("de");
	cout << pos << endl;
}

//2.�滻
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