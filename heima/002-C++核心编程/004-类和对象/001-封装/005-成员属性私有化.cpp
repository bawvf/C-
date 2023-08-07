#include <iostream>
using namespace std;

//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
class Person
{
public:
	//写姓名
	void setName(string name) {
		m_Name = name;
	}
	//读姓名
	string getName() {
		return m_Name;
	}
	//获取年龄
	int getAge() {
		m_Age = 10;
		return m_Age;
	}
	//写年龄
	void setAge(int age) {
		if (age < 0 || age > 100)
			cout << "错误" << endl;
		else
			m_Age = age;
	}
	//写情人
	void setLover(string lover) {
		m_lover = lover;
	}


private:
	string m_Name;
	int m_Age;
	string m_lover;
};

int main() {

	Person p1;

	p1.setName("张三");
	cout << p1.getName() << endl;

	cout << p1.getAge() << endl;

	p1.setLover("千万");

	return 0;
}