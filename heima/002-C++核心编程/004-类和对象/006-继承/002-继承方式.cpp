#include <iostream>
using namespace std;

//公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;
		//父类中的公共权限成员到子类中依然是公共权限
		m_B = 10;
		//父类中的包含权限成员到子类中依然是保护权限.
		//m_C = 10;
		//父类中的私有权限成员子类访问不到

	}
};

void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;
	// 到Son1中m_B是保护权限类外访问不到
}

//保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2 {
public:
	void func() {
		m_A = 100;
		//父类中公共成员，到子类中变为保护权限
		m_B = 100;
		//父类中保护成员，到子类中变为保护权限
		//m_C = 100;
		//子类访问不到
	}
};

void test02() {
	Son2 s1;
	//s1.m_A = 100;
	//在Son2中m_ _A变为保护权限，因此类外访问不到
}

//私有继承
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3 {
	void func() {
		m_A = 100;
		m_B = 100;
		//m_C = 100;
		//父类中私有成员，子类访问不到 其他都变为私有成员
	}
};

void test03() {
	Son3 s1;
	//s1.m_A = 100;	//到Son3中 变为私有成员类外访问不到
}

class GrandSon3 : public Son3 {
public:
	void func() {
		//m_A = 100;
		//到了Son3中 m_ _A变为私有，及时是儿子，也是访问不到

	}
};

int main() {


	return 0;
}