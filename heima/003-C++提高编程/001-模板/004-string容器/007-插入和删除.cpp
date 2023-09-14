#include <iostream>
using namespace std;
#include <string>

void test01() {
	string str = "hello";

	//≤Â»Î
	str.insert(1, "111");
	cout << str << endl;

	//…æ≥˝
	str.erase(1, 3);
	cout << str << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}