#include <iostream>
using namespace std;

//���һ��԰�� ��Բ���ܳ�
const double PI = 3.14;

//class �������һ���� ��������������
class Circle {
	//����Ȩ��
	//����Ȩ��
public:
	//����

	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};