#include <iostream>
using namespace std;

class Building {

	friend void goodGay(Building* building);

public:
	Building() {
		m_SittingRoom = "客厅";
		m_badRoom = "卧室";
	}

public:
	string m_SittingRoom;

private:
	string m_badRoom;
};

//全局函数
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