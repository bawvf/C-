#include <iostream>
using namespace std;

#include <set>

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class compateperson {
public:
	bool operator()(const Person &p1, const Person &p2) const {
		//°´ÕÕÄêÁä ½µĞò
		return p1.m_Age > p2.m_Age;
	}
};

void test01() {
	set<Person, compateperson>s;

	Person p1("Áõ±¸", 24);
	Person p2("¹ØÓğ", 28);
	Person p3("ÕÅ·É", 25);
	Person p4("ÕÔÔÆ", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, compateperson>::iterator it = s.begin(); it != s.end(); it++)
		cout << it->m_Name << " " << it->m_Age << endl;
}

int main() {

	test01();

	//test02();

	return 0;
}