#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

void test01() {
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos =  adjacent_find(v.begin(), v.end());

	if (pos == v.end())
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	else
		cout << "�ҵ������ظ�Ԫ��" << *pos << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}