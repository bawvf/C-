#include <iostream>
using namespace std;

//访问权限

//公共权限 public		成员类内可以访问 类外可以访问
//保护权限 proteced		成员类内可以访问 类外不可以访问	
//私有权限 private		成员类内可以访问 类外不可以访问	
class Person {
	//公共权限
public:
	string name;

	//保护权限
protected:
	string m_car;

	//私有权限 
private:
	int m_Passworld;

public:
	void func() {
		name = "张三";
		m_car = "汽车";
		m_Passworld = 123456;
	}
};




int main() {

	Person p1;

	p1.name = "李四";
	

	return 0;
}

