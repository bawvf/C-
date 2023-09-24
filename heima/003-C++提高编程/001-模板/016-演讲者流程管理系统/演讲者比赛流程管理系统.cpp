#include <iostream>
using namespace std;

#include "speechManager.h"
#include <ctime>

int main() {
	//���������
	srand((unsigned int)time(NULL));

	//�������������
	SpeechManager sm;

	////����
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++) {
	//	cout << "���" << it->first << "����" << it->second.m_Name << "����" << it->second.m_Score[0] << endl;
	//}

	int choice = 0; //���ڴ洢�û�����

	while (true) {
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
		case 1:		//��ʼ����
			sm.startSpeech();
			break;
		case 2:		//�鿴�����¼
			sm.loadRecord();
			break;
		case 3:		//��ձ�����¼
			sm.clearRecord();
			break;
		case 0:		//�˳�ϵͳ
			sm.exitSystem();
			break;
		default:	//����
			system("cls");
			break;
		}
	}

	return 0;
}