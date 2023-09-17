#include <iostream>
using namespace std;

#include <list>
#include <algorithm>

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
		cout << *it << " ";
	cout << endl;
}

class Person {
public:
	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

//指定排序规则
bool comparePerson(Person &p1, Person &p2) {
	//按照年龄 升序
	if (p1.m_Age == p2.m_Age)
		return p1.m_Height > p2.m_Height;
	else
		return p1.m_Age < p2.m_Age;
}

void test01() {
	list<Person>L;

	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
		cout << (*it).m_Name << " " << (*it).m_Age << " " << (*it).m_Height << endl;

	//排序
	cout << "排序后：" << endl;

	L.sort(comparePerson);
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
		cout << (*it).m_Name << " " << (*it).m_Age << " " << (*it).m_Height << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}