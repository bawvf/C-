#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//创建目标容器
	vector<int>vTarget;
	//给目标容器开辟空间
	vTarget.resize(max(v1.size(), v2.size()));
	cout << "v1和v2的差集为：" << endl;

	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;
}

int main() {

	test01();

	return 0;
}