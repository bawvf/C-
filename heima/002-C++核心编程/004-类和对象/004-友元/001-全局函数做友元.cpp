#include <iostream>
using namespace std;

class Building {

	friend void goodGay(Building* building);

public:
	Building() {
		m_SittingRoom = "����";
		m_badRoom = "����";
	}

public:
	string m_SittingRoom;

private:
	string m_badRoom;
};

//ȫ�ֺ���
void goodGay(Building* building) {
	cout << building->m_SittingRoom << endl;

	cout << building->m_badRoom << endl;
}

void test01() {
	Building B;
	goodGay(&B);
}

int main() {

	test01();

	return 0;
}