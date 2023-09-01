#include <iostream>
using namespace std;

////JAVA页面
//class Java {
//public:
//	void header() {
//		cout << "首页、公开课。。。。。" << endl;
//	}
//	void footer() {
//		cout << "帮助中心、交流合作。。。" << endl;
//	}
//	void left() {
//		cout << "Java Python...." << endl;
//	}
//	void content() {
//		cout << "Java学科资料" << endl;
//	}
//};
//
////Python 页面
//class Python {
//public:
//	void header() {
//		cout << "首页、公开课。。。。。" << endl;
//	}
//	void footer() {
//		cout << "帮助中心、交流合作。。。" << endl;
//	}
//	void left() {
//		cout << "Java Python...." << endl;
//	}
//	void content() {
//		cout << "Python学科资料" << endl;
//	}
//};
//
////C++
//class C {
//public:
//	void header() {
//		cout << "首页、公开课。。。。。" << endl;
//	}
//	void footer() {
//		cout << "帮助中心、交流合作。。。" << endl;
//	}
//	void left() {
//		cout << "Java Python...." << endl;
//	}
//	void content() {
//		cout << "Python学科资料" << endl;
//	}
//};

//继承页面实现

//公共页面类
class BasePage {
public:
	void header() {
			cout << "首页、公开课。。。。。" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作。。。" << endl;
	}
	void left() {
		cout << "Java Python...." << endl;
	}
	void content() {
		cout << "Python学科资料" << endl;
	}
};

//JAVA页面
class Java :public BasePage {
public:
	void content() {
		cout << "Java学科资料" << endl;
	}
};

//Python页面
class Python :public BasePage {
public:
	void content() {
		cout << "Python学科资料" << endl;
	}
};

//C++页面
class C_Plus :public BasePage {
public:
	void content() {
		cout << "C++学科资料" << endl;
	}
};



void test01() {

	cout << "Java视频下载页面" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "-----------------------" << endl;

	cout << "Java视频下载页面" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "-----------------------" << endl;

	cout << "Java视频下载页面" << endl;
	C_Plus c;
	c.header();
	c.footer();
	c.left();
	c.content();
}

int main() {

	test01();

	return 0;
}