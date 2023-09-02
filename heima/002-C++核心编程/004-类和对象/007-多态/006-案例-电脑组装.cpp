#include <iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU {
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard {
public:
	//抽象的计算函数
	virtual void display() = 0;
};

//抽象内存类
class Memory {
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作的函数
	void work() {
		// 让零件工作起来，调用接口
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
	CPU* m_cpu;	//CPU的零件指针
	VideoCard* m_vc;	//显卡零件指针
	Memory* m_mem;	//内存条零件指针
};

//具体厂商
//Intel厂商
class IntelCPU : public CPU {
public:
	virtual void calculate() {
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class IntelVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "Intel的显卡开始了" << endl;
	}
};

class IntelMemory : public Memory {
public:
	virtual void storage() {
		cout << "Intel的内存开始了" << endl;
	}
};

//lenovo厂商
class lenovoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "lenovo的CPU开始计算了" << endl;
	}
};

class lenovoVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "lenovo的显卡开始了" << endl;
	}
};

class lenovoMemory : public Memory {
public:
	virtual void storage() {
		cout << "lenovo的内存开始了" << endl;
	}
};

void test01() {
	//第一台电脑零件
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelcard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->work();
	delete computer1;

	cout << "第二台电脑工作" << endl;

	//第二台电脑组装
	Computer* computer2 = new Computer(new lenovoCPU, new lenovoVideoCard, new lenovoMemory);
	computer2->work();
	delete computer2;
}

int main() {
	
	test01();

	return 0;
}