#include <iostream>
using namespace std;

//分类
//按照参数分类
//无参构造(默认构造) 和有参构造
//按照类型分类
//普通构造
//拷贝构造

class Person {
public:
	//构造函数
	Person() {
		cout << "构造无参函数的调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "构造有参函数的调用" << endl;
	}

	//拷贝构造函数
	Person(const Person &p) {
		// 将传入的人身.上的所有属性，拷贝到我身E[
		age = p.age;
	}

	//析构函数
	~Person() {
		cout << "析构函数的调用" << endl;
	}

	int age;
};

//调用
void test01() {

	//1、括号法
	//Person p1;		//默认构造函数
	//Person p2(10);	//有参构造函数
	//Person p3(p2);	//拷贝构造函数

	////注意事项
	////调用默认构造函数时候，不要加()
	////因为下面这行代码，编译器会认为是一个函数的声明

	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//2、显示法
	Person p1;
	Person p2 = Person(10);	//有参构造
	Person p2 = Person(p2); //拷贝构造

	Person(10);  //匿名对象 特点:当前行执行结束后，系统会立即回收掉匿名对象

	//注意事项2 
	//不要利用拷贝构造函数初始化匿名对象	初始化匿名对象编译器会认为 Person (p3) === Person p3;

	Person(p3);


	//3、 隐式转换法
	Person p4 = 10; //相当于写了Person p4 = Person (10)
	Person p5 = p4;


}

int main() {

	test01();

	return 0;
}