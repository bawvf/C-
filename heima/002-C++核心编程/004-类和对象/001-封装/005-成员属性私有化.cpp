#include <iostream>
using namespace std;

//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class Person
{
public:
	//д����
	void setName(string name) {
		m_Name = name;
	}
	//������
	string getName() {
		return m_Name;
	}
	//��ȡ����
	int getAge() {
		m_Age = 10;
		return m_Age;
	}
	//д����
	void setAge(int age) {
		if (age < 0 || age > 100)
			cout << "����" << endl;
		else
			m_Age = age;
	}
	//д����
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

	p1.setName("����");
	cout << p1.getName() << endl;

	cout << p1.getAge() << endl;

	p1.setLover("ǧ��");

	return 0;
}