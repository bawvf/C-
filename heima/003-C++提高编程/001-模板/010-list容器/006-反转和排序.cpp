#include <iostream>
using namespace std;

#include <list>
#include <algorithm>

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01() {
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "��תǰ��" << endl;
	printList(L1);

	//��ת
	L1.reverse();
	cout << "��ת��" << endl;
	printList(L1);
}

bool myCpmpare(int v1, int v2) {
	return v1 > v2;
}

//����
void test02() {
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "����ǰ��" << endl;
	printList(L1);

	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
	L1.sort(); 
	cout << "�����" << endl;
	printList(L1);

	L1.sort(myCpmpare);
	printList(L1) ;
}

int main() {

	test01();

	//test02();

	return 0;
}