#include <iostream>
using namespace std;

class c1 {
	int m_A:
};

struct c2
{
	int m_A;
};

int main() {

	//struct Ĭ��Ȩ�� public
	//class  Ĭ��Ȩ�� private

	c1 c1; 

	c2 c2;
	c2.m_A = 100;


	return 0;
}