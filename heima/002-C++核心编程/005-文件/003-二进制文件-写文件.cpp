#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:

	char m_Name[64];
	int m_Age;
};

void test01() {
	//1�� ����ͷ�ļ�
	
	//2�� ����������
	ofstream ofs;
	//3�� ���ļ�
	ofs.open("person.txt", ios::out | ios::binary);

	//4��д�ļ�
	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person));
		
	// 5�� �ر��ļ�
	ofs.close();
}

int main() {

	test01();

	return 0;
}