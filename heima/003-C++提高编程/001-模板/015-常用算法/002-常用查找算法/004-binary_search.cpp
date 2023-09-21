#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	//查找容器中是否有9元素
	//注意：容器必须是有序的序列
	bool ret = binary_search(v.begin(), v.end(), 0);

	if (ret)
		cout << "找到了元素" << endl;
	else
		cout << "未找到" << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}