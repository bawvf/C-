#include <iostream>
using namespace std;

//վλ����
void func(int a, int = 10) {
	cout << "this is func" << endl;
}

int main() {

	func(10, 10);

	return 0;
}