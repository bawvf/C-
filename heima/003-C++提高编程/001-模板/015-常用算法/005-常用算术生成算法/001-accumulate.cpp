#include <iostream>
using namespace std;

#include <vector>
#include <numeric>

void test01() {
	vector<int>v;

	for (int i = 0; i <= 100; i++)
		v.push_back(i);

	//����3 ��ʼ�ۼ�ֵ
	int total = accumulate(v.begin(), v.end(), 0);

	cout << total << endl;
}

int main() {

	test01();

	return 0;
}