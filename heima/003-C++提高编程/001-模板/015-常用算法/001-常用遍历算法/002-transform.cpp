#include <iostream>
using namespace std;

#include <vector>
#include<algorithm>

class Transform {
public:
	int operator()(int v) {
		return v;
	}
};

class MyPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	vector<int>vTarget;		//目标容器
	vTarget.resize(v.size());	//目标容器 需要提前开辟空间
	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());																									
}

int main() {

	test01();

	return 0;
}