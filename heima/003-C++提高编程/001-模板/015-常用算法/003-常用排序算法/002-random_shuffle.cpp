#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
#include <functional>

void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	//����ϴ�� �㷨 ����˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main() {

	test01();

	return 0;
}