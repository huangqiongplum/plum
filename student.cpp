#include<iostream>
#include <string>
using namespace std;
class student
{
private:
	string name;
	int number;
	bool gender;
	float score;
	float high;
	float weight;
	int year;
	int month;
	int day;
	string address;
public:
	void input()
	{
		cout << "����" << endl;
		cin >> name;
		cout << "ѧ��" << endl;
		cin >> number;
		cout << "�Ա�1ΪŮ��0Ϊ������" << endl;
		cin >> gender;
		cout << "�߿��ɼ�" << endl;
		cin >> score;
		cout << "���" << endl;
		cin >> high;
		cout << "����" << endl;
		cin >> weight;
		cout << "��������" << endl;
		cin >> year;
		cin >> month;
		cin >> day;
		cout << "��ͥסַ" << endl;
		cin >> address;
	}
	void display()
	{
		cout << "���ѧ��������Ϣ��" << endl;
		cout << "����:" << name << endl;
		cout << "ѧ��" << number << endl;
		cout << "�Ա�(1ΪŮ��0Ϊ������:" << gender << endl;
		cout << "�߿��ɼ�:" << score << endl;
		cout << "���:" << high << endl;
		cout << "����" << weight << endl;
		cout << "��������:" << year << "-" << month << "-" << day << endl;
		cout << "��ͥסַ:" << address << endl;
	}
	void rewrite()
	{
		cout << "�����������޸�ѧ��������Ϣ��" << endl;
		cout << "����0���޸�" << endl;
		cout << "����1�޸�����" << endl;
		cout << "����2�޸�ѧ��" << endl;
		cout << "����3�޸��Ա�" << endl;
		cout << "����4�޸ĸ߿��ɼ�" << endl;
		cout << "����5�޸����" << endl;
		cout << "����6�޸�����" << endl;
		cout << "����7�޸ĳ�������" << endl;
		cout << "����8�޸ļ�ͥסַ" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:cout << "�޸�����"; cin >> name;
			break;
		case 2:cout << "�޸�ѧ��"; cin >> name;
			break;
		case 3:cout << "�޸��Ա�"; cin >> gender;
			break;
		case 4:cout << "�޸ĸ߿��ɼ�"; cin >> name;
			break;
		case 5:cout << "�޸����"; cin >> name;
			break;
		case 6:cout << "�޸�����"; cin >> name;
			break;
		case7:cout << "�޸ĳ���������"; cin >> year >> month >> day;
			break;
		case 8:cout << "�޸ļ�ͥסַ"; cin >> address;
			break;
		default:break;
		}
	}
};
int main()
{
	student  t;

	t.input();

	t.rewrite();

	t.display();
	system("pause");
	return 0;
}