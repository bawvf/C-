#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "构造函数的调用" << endl;
	}
	Person(int age, int height) {
		m_age = age;
		m_Height = new int(height);
	}
	Person(const Person& p) {
		m_age = m_age;
		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}

	~Person() {
		cout << "析构函数的调用" << endl;
		if (m_Height != NULL)
			delete m_Height;
		m_Height = NULL;
	}
	//Person(const Person& p) {
	//	m_age = p.m_age;
	//}

	int m_age;
	int* m_Height;
};




void test01() {
	Person p1(18, 160);

	cout << p1.m_age << endl;
	cout << *p1.m_Height << endl;

}

int main() {

	test01();

	return 0;
}