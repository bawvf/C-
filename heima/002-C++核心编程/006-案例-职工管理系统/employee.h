//��ͨԱ���ļ�

#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "worker.h"

class Employee : public Worker {
public:

	Employee(int id, string name, int dId);

	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ����
	string getDeptName();
};
