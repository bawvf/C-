#include <iostream>
using namespace std;

//��̬��̬��������
// 1���м̳й�ϵ
//2��������д������麯��
// 
//��̬��̬ʹ��
//�����ָ���������ִ���������


//������
class Animal {
public:
	//�麯��
	virtual void speak() {
		cout << "������˵��" << endl;
	}
};

//è��
class Cat : public Animal {
public:
	void speak() {
		cout << "è��˵��" << endl;
	}
};

//����
class Dog : public Animal {
public:
	void speak() {
		cout << "����˵��" << endl;
	}
};

//ִ��˵���ĺ���
// ��ַ��� �ڱ���׶�ȷ��������ַ
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