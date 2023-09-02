#include <iostream>
using namespace std;

//动态多态满足条件
// 1、有继承关系
//2、子类重写父类的虚函数
// 
//动态多态使用
//父类的指针或者引用执行子类对象


//动物类
class Animal {
public:
	//虚函数
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat : public Animal {
public:
	void speak() {
		cout << "猫在说话" << endl;
	}
};

//狗类
class Dog : public Animal {
public:
	void speak() {
		cout << "狗在说话" << endl;
	}
};

//执行说话的函数
// 地址早绑定 在编译阶段确定函数地址
void doSpeak(Animal &animal) {
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02() {
	cout << sizeof(Animal) << endl;
}

int main() {

	//test01();
	test02();

	return 0;
}