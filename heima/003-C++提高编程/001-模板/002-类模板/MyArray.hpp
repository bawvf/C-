//自己通用的数组类

#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//有参构造	参数 容量
	MyArray(int capacity) {
		//cout << "MyArray有参函数调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAAdress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr) {
		//cout << "MyArray拷贝函数调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->PAddress = arr.PAddress;

		//深拷贝
		this->pAAdress = new T[arr.m_Capacity];

		//将Arr中的数据拷贝过来
		for (int i = 0; i < this->m_Size; i++)
			this->pAAdress[i] = arr.pAAdress[i];
	}

	//operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr) {
		//cout << "MyArray operator=函数调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAAdress != NULL) {
			delete[] this->pAAdress;
			this->pAAdress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAAdress = new T[arr.m_Capacity];

		for (int i = 0; i < this->m_Size; i++)
			this->pAAdress[i] = arr.pAAdress[i];

		return *this;
	}

	//尾插法
	void Push_Back(const T & val) {
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAAdress[this->m_Size] = val;
		this->m_Size++;	//更新数组大小
	}
	//尾删法
	void Pop_Back() {
		//让用户访问不到最后一一个元素，即为尾删，逻辑删除
		if (this->m_Size == 0)
			return;
		this->m_Size--;
	}

	//通过下标方式访问数组中的元素
	T operator[](int index) {
		return this->pAAdress[index];
	}

	//返回数组容量
	int getCapacity() {
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize() {
		return this->m_Size;
	}

	//析构函数
	~MyArray() {
		//cout << "MyArray析构函数调用" << endl;
		if (this->pAAdress != NULL) {
			delete[] this->pAAdress;
			this->pAAdress = NULL;
		}
	}

private:

	T* pAAdress;	//指针治向堆开辟的真实数组

	int m_Capacity;	//数组容量

	int m_Size;		//数组大小
};