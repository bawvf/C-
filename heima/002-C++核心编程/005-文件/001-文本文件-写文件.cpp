#include <iostream>
#include <fstream>
using namespace std;

void test01() {
	//1������ͷ�ļ�fstream
	
	//2������������

	ofstream ofs;

	//3.ָ�����ļ�
	ofs.open("test.txt", ios::out);

	//4.д����
	ofs << "������ ����" << endl;
	ofs << "�Ա� ��" << endl;
	ofs << "���䣺 18" << endl;

	//5.�ر��ļ�
	ofs.close();

}

int main() {

	test01();

	return 0;
}