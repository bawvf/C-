//�Լ�ͨ�õ�������

#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//�вι���	���� ����
	MyArray(int capacity) {
		//cout << "MyArray�вκ�������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAAdress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr) {
		//cout << "MyArray������������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->PAddress = arr.PAddress;

		//���
		this->pAAdress = new T[arr.m_Capacity];

		//��Arr�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
			this->pAAdress[i] = arr.pAAdress[i];
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr) {
		//cout << "MyArray operator=��������" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAAdress != NULL) {
			delete[] this->pAAdress;
			this->pAAdress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAAdress = new T[arr.m_Capacity];

		for (int i = 0; i < this->m_Size; i++)
			this->pAAdress[i] = arr.pAAdress[i];

		return *this;
	}

	//β�巨
	void Push_Back(const T & val) {
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAAdress[this->m_Size] = val;
		this->m_Size++;	//���������С
	}
	//βɾ��
	void Pop_Back() {
		//���û����ʲ������һһ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0)
			return;
		this->m_Size--;
	}

	//ͨ���±귽ʽ���������е�Ԫ��
	T operator[](int index) {
		return this->pAAdress[index];
	}

	//������������
	int getCapacity() {
		return this->m_Capacity;
	}

	//���������С
	int getSize() {
		return this->m_Size;
	}

	//��������
	~MyArray() {
		//cout << "MyArray������������" << endl;
		if (this->pAAdress != NULL) {
			delete[] this->pAAdress;
			this->pAAdress = NULL;
		}
	}

private:

	T* pAAdress;	//ָ������ѿ��ٵ���ʵ����

	int m_Capacity;	//��������

	int m_Size;		//�����С
};