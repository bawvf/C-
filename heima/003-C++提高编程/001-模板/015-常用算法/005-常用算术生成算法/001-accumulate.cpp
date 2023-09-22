#include <iostream>
using namespace std;

#include <vector>
#include <numeric>

void test01() {
	vector<int>v;

	for (int i = 0; i <= 100; i++)
		v.push_back(i);

	//参数3 起始累加值
	int total = accumulate(v.begin(), v.end(), 0);

	cout << total << endl;
}

int main() {

	test01();

	return 0;
}