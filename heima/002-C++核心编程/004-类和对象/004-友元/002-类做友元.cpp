#include <iostream>
using namespace std;

class Building {

	friend class goodGay; 

public:
	Building() {
		m_SittingRoom = "客厅1";
		m_badRoom = "卧室1";
	}

public:
	string m_SittingRoom;

private:
	string m_badRoom;
};

//全局类
class goodGay {
public:

	goodGay();

	void visit();

	Building* building;
};

goodGay::goodGay() {
	building = new Building;
}

void goodGay::visit() {
	cout << building->m_SittingRoom << endl;

	cout << building->m_SittingRoom << endl;
}

void test01() {
	goodGay g;
	g.visit();
}

int main() {

	test01();

	return 0;
}