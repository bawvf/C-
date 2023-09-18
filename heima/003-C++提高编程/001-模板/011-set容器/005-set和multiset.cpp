#include <iostream>
using namespace std;

#include <set>

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01() {
	set<int>s;

	s.insert(10);
	s.insert(10);
}

int main() {

	test01();

	test02();

	return 0;
}