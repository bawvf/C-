#include <iostream>
using namespace std;

void test01() {
	//第一种方式
	pair<string, int>p("Tom", 20);
	cout << p.first << p.second << endl;

	//第二种方式
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << p2.first << p2.second << endl;
}

int main() {

	test01();

	return 0;
}