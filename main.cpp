#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include<cstdlib>
using namespace std;
char n[10];
int id;
class student
{
private:
	int id;
	char *name;
	int age;
	char address;
public:
	student()
	{
		cout << "�޲κ���������" << endl;
	}
	student(int id, const char *user_name, int age, string address)
	{
		cout << "���캯��������" << endl;
		this->id = id;
		if (user_name != NULL)
		{
			int len = strlen(user_name);
			name = new char[len + 1];
			strcpy(name, user_name);
		}
		this->age = age;
		this->address = address;
	}
	student(const student &r)
	{
		this->id = r.id;
		if (r.name != NULL)
		{
			int len = strlen(r.name);
			this->name = new char[len + 1];
			strcpy(this->name, r.name);
		}
		this->age = r.age;
		this->address = address;
		cout << "���ÿ�������" << endl;
	}
	~student()
	{
		cout << "��������������" << endl;
		delete[]name;
		delete[]n;
	}
	void display()
	{
		cout << "���ѧ��������Ϣ��" << endl;
		cout << "����:" << n << endl;
		cout << "ѧ��" << id << endl;
		cout << "����" << age << endl;
		cout << "��ͥסַ:" << address << endl;
	}
	void input()
	{
		cout << "��������" << endl;
		cin >> n;
		cout << "������ѧ�ţ�" << endl;
		cin >> id;
		cout << "���������䣺" << endl;
		cin >> age;
		cout << "�������ͥסַ" << endl;
		cin >> address;
	}
	void rewrite()
	{
		cout << "�����������޸�ѧ��������Ϣ��" << endl;
		cout << "����0���޸�" << endl;
		cout << "����1�޸�����" << endl;
		cout << "����2�޸�ѧ��" << endl;
		cout << "����3�޸�����" << endl;
		cout << "����4�޸ļ�ͥסַ" << endl;
		int s;
		cin >> s;
		switch (s)
		{
		case 1:cout << "�޸�����"; cin >> n;
			break;
		case 2:cout << "�޸�ѧ��"; cin >> id;
			break;
		case 3:cout << "�޸�����"; cin >> age;
			break;
		case 4:cout << "�޸ļ�ͥסַ"; cin >> address;
			break;
		default:break;
		}
		cout << "�޸Ľ���" << endl;
	}
};
int main()
{
	char *name = new char[10];
	strcpy(name, n);
	cin >> id;
	student t;
	t.input();
	t.rewrite();
	t.display();
	student  t1(id, name, 19,  "����");
	student t2 = t1;
	t1.display();
	t2.display();
	system("pause");
	return 0;
}