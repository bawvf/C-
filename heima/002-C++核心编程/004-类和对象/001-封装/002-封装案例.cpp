#include <iostream>
using namespace std;

//设计一个学生类
class Student {
public:

	//成员

	//属性
	string m_Name;
	int m_Id;

	//行为
	void showStudent() {
		cout << "姓名" << m_Name << "学号" << m_Id << endl;
	}

	//给姓名赋值
	void setName(string name) {
		m_Name = name;
	}

	//给学号赋值
	void setId(int id) {
		m_Id = id;
	}
};



int main() {

	//创建一个具体学生
	Student s1;
	//赋值
	//s1.m_Name = "张三";
	s1.setName("张三");
	//s1.m_Id = 1;
	s1.setId(1);

	Student s2;
	s1.m_Name = "张三";
	s1.m_Id = 2;
	s1.showStudent();

	s1.showStudent();


	return 0;
}

