#include <iostream>
using namespace std;

//���һ��ѧ����
class Student {
public:

	//��Ա

	//����
	string m_Name;
	int m_Id;

	//��Ϊ
	void showStudent() {
		cout << "����" << m_Name << "ѧ��" << m_Id << endl;
	}

	//��������ֵ
	void setName(string name) {
		m_Name = name;
	}

	//��ѧ�Ÿ�ֵ
	void setId(int id) {
		m_Id = id;
	}
};



int main() {

	//����һ������ѧ��
	Student s1;
	//��ֵ
	//s1.m_Name = "����";
	s1.setName("����");
	//s1.m_Id = 1;
	s1.setId(1);

	Student s2;
	s1.m_Name = "����";
	s1.m_Id = 2;
	s1.showStudent();

	s1.showStudent();


	return 0;
}

