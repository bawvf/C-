#include <iostream>
using namespace std;

#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1�� 2Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};
//���ͨѶ¼�ṹ��
struct Addressbooks {
	struct Person personArray[MAX];

	int m_Size;
};

//1.�����ϵ��
void addPreson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else {
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;

		int sex;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");	//�밴���������
		system("cls");		//�����Ļ
	}
}

//2.��ʾ������ϵ��
void showPerson(Addressbooks *abs) {
	if (abs->m_Size == 0)
		cout << "��ǰ��¼Ϊ��" << endl;
	else
	{
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << "\t";
		}
	}

	system("pause");	//�밴���������
	system("cls");		//�����Ļ
}

//�����ϵ���Ƿ����
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name)
			return i;
	}
	return -1;
}

//3.ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs) {
	cout << "��������Ҫɾ������ϵ��" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++)
			abs->personArray[i] = abs->personArray[i + 1];
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
}

//4.����ָ����ϵ����Ϣ
void findPerson(Addressbooks* abs) {
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << "\t";
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");	//�밴���������
	system("cls");		//�����Ļ
}

//5.�޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs) {
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;

		int sex;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");	//�밴���������
	system("cls");		//�����Ļ
}

//6.���������ϵ��
void cleanPerson(Addressbooks* abs) {
	abs->m_Size = 0;
}

//�˵�����
void showMenu() {
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳���ϵ�� *****" << endl;
	cout << "************************" << endl;
}

int main() {

	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ����
	abs.m_Size = 0;

	//�����û�ѡ������ı���
	int select = 0;

	while (true) {
		//�˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPreson(&abs);	//���õ�ַ���� ��������ʵ��
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
			break;
		default:
			break;
		}
	}

	return 0;
}