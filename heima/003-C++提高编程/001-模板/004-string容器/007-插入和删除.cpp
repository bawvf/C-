#include <iostream>
using namespace std;
#include <string>

void test01() {
	string str = "hello";

	//����
	str.insert(1, "111");
	cout << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << str << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}