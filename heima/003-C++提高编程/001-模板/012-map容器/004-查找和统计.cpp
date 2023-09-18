#include <iostream>
using namespace std;

#include <map>

void printMap(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "Key=" << (*it).first << " " << "value" << it->second << endl;
	cout << endl;
}

void test01() {
	//����
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
		cout << "�鵽��" << (*pos).first << "value" << pos->second << endl;
	else
		cout << "δ�ҵ�Ԫ��" << endl;
	//ͳ��
	int num = m.count(3);
	cout << num << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}