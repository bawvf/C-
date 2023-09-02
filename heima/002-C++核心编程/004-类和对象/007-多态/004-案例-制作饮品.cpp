#include <iostream>
using namespace std;

class AbstractDrinking {
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅助佐料
	virtual void PutSomething() = 0;

	//制作饮料
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class Coffee : public AbstractDrinking {
public:
	//煮水
	virtual void Boil() {
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void Brew() {
		cout << "冲咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	//加入辅助佐料
	virtual void PutSomething() {
		cout << "加入牛奶" << endl;
	}
};

//制作茶叶
class Tea : public AbstractDrinking {
public:
	//煮水
	virtual void Boil() {
		cout << "煮开水" << endl;
	}

	//冲泡
	virtual void Brew() {
		cout << "冲茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	//加入辅助佐料
	virtual void PutSomething() {
		cout << "加入糖" << endl;
	}
};

//制作函数
void doWork(AbstractDrinking * abs) {
	abs->makeDrink();
	delete abs;
}

void test01() {
	//制作函数
	doWork(new Coffee);

	cout << "-----------" << endl;

	doWork(new Tea);
}

int main() {

	test01();

	return 0;
}