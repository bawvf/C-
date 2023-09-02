#include <iostream>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal���캯������" << endl;
	}

	//���麯��
	virtual void speak() = 0;

	// �������������Խ������ָ���ͷ��������ʱ���ɾ�������
	virtual ~Animal() {
		cout << "Animal������������" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string name) {
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string *m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//����ָ��������ʱ�򲻻��������������������������������ж������ԣ� �����ڴ�˭©

	delete animal;
}

int main() {

	test01();

	return 0;
}