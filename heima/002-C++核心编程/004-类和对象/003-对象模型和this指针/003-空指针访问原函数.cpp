#include <iostream>
using namespace std;

class Person {
public:
	void showClassName() {
		cout << "Person class" << endl;
	}

	// 报错原因是因为传入的指针是为NULL
	void showPersonAge() {
		cout << m_Age << endl;
	}

	int m_Age = 188;
};


void test01() {
	Person* P = NULL;
	P->showClassName();

	P->showPersonAge();
}

void test02() {

}

int main() {

	test01();
	test02();

	return 0;
}