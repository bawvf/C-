#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	//�����������Ƿ���9Ԫ��
	//ע�⣺�������������������
	bool ret = binary_search(v.begin(), v.end(), 0);

	if (ret)
		cout << "�ҵ���Ԫ��" << endl;
	else
		cout << "δ�ҵ�" << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}