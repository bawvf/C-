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

	//struct 默认权限 public
	//class  默认权限 private

	c1 c1; 

	c2 c2;
	c2.m_A = 100;


	return 0;
}