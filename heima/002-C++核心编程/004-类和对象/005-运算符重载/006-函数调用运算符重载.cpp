#include <iostream>
using namespace std;

//��ӡ�����
class MyPrint {
public:
	//���غ������������
	void operator()(string test) {
		cout << test << endl;
	}
};

void test01() {
	MyPrint myprint;
	myprint("Hello");
}

int main() {

	test01();

	return 0;
}