#include <iostream>
using namespace std;

class Building;

class goodGay {
public:

	goodGay();

	void visit();	//visit�������Է���Building��˽�г�Ա
	void visit02();

private:
	Building* building;
};

class Building {

	friend void goodGay::visit();

public:
	Building() {
		m_SittingRoom = "����";
		m_badRoom = "����1`";
	}

public:
	string m_SittingRoom;

private:
	string m_badRoom;
};

goodGay::goodGay() {
	building = new Building;
}

void goodGay::visit() {
	cout << building->m_SittingRoom << endl;

	cout << building->m_badRoom << endl;
}

void goodGay::visit02() {
	cout << building->m_SittingRoom << endl;
}

void test01() {
	goodGay g;
	g.visit();
	g.visit02();
}

int main() {

	test01();

	return 0;
}