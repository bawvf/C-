#include <iostream>
using namespace std;

////JAVAҳ��
//class Java {
//public:
//	void header() {
//		cout << "��ҳ�������Ρ���������" << endl;
//	}
//	void footer() {
//		cout << "�������ġ���������������" << endl;
//	}
//	void left() {
//		cout << "Java Python...." << endl;
//	}
//	void content() {
//		cout << "Javaѧ������" << endl;
//	}
//};
//
////Python ҳ��
//class Python {
//public:
//	void header() {
//		cout << "��ҳ�������Ρ���������" << endl;
//	}
//	void footer() {
//		cout << "�������ġ���������������" << endl;
//	}
//	void left() {
//		cout << "Java Python...." << endl;
//	}
//	void content() {
//		cout << "Pythonѧ������" << endl;
//	}
//};
//
////C++
//class C {
//public:
//	void header() {
//		cout << "��ҳ�������Ρ���������" << endl;
//	}
//	void footer() {
//		cout << "�������ġ���������������" << endl;
//	}
//	void left() {
//		cout << "Java Python...." << endl;
//	}
//	void content() {
//		cout << "Pythonѧ������" << endl;
//	}
//};

//�̳�ҳ��ʵ��

//����ҳ����
class BasePage {
public:
	void header() {
			cout << "��ҳ�������Ρ���������" << endl;
	}
	void footer() {
		cout << "�������ġ���������������" << endl;
	}
	void left() {
		cout << "Java Python...." << endl;
	}
	void content() {
		cout << "Pythonѧ������" << endl;
	}
};

//JAVAҳ��
class Java :public BasePage {
public:
	void content() {
		cout << "Javaѧ������" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage {
public:
	void content() {
		cout << "Pythonѧ������" << endl;
	}
};

//C++ҳ��
class C_Plus :public BasePage {
public:
	void content() {
		cout << "C++ѧ������" << endl;
	}
};



void test01() {

	cout << "Java��Ƶ����ҳ��" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "-----------------------" << endl;

	cout << "Java��Ƶ����ҳ��" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "-----------------------" << endl;

	cout << "Java��Ƶ����ҳ��" << endl;
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