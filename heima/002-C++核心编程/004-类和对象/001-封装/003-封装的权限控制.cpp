#include <iostream>
using namespace std;

//����Ȩ��

//����Ȩ�� public		��Ա���ڿ��Է��� ������Է���
//����Ȩ�� proteced		��Ա���ڿ��Է��� ���ⲻ���Է���	
//˽��Ȩ�� private		��Ա���ڿ��Է��� ���ⲻ���Է���	
class Person {
	//����Ȩ��
public:
	string name;

	//����Ȩ��
protected:
	string m_car;

	//˽��Ȩ�� 
private:
	int m_Passworld;

public:
	void func() {
		name = "����";
		m_car = "����";
		m_Passworld = 123456;
	}
};




int main() {

	Person p1;

	p1.name = "����";
	

	return 0;
}

