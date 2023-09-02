#include <iostream>
using namespace std;

//����ͬ�����
//����CPU��
class CPU {
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard {
public:
	//����ļ��㺯��
	virtual void display() = 0;
};

//�����ڴ���
class Memory {
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work() {
		// ������������������ýӿ�
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;	//CPU�����ָ��
	VideoCard* m_vc;	//�Կ����ָ��
	Memory* m_mem;	//�ڴ������ָ��
};

//���峧��
//Intel����
class IntelCPU : public CPU {
public:
	virtual void calculate() {
		cout << "Intel��CPU��ʼ������" << endl;
	}
};

class IntelVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "Intel���Կ���ʼ��" << endl;
	}
};

class IntelMemory : public Memory {
public:
	virtual void storage() {
		cout << "Intel���ڴ濪ʼ��" << endl;
	}
};

//lenovo����
class lenovoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "lenovo��CPU��ʼ������" << endl;
	}
};

class lenovoVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "lenovo���Կ���ʼ��" << endl;
	}
};

class lenovoMemory : public Memory {
public:
	virtual void storage() {
		cout << "lenovo���ڴ濪ʼ��" << endl;
	}
};

void test01() {
	//��һ̨�������
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelcard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->work();
	delete computer1;

	cout << "�ڶ�̨���Թ���" << endl;

	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new lenovoCPU, new lenovoVideoCard, new lenovoMemory);
	computer2->work();
	delete computer2;
}

int main() {
	
	test01();

	return 0;
}