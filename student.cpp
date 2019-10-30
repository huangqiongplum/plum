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
		cout << "姓名" << endl;
		cin >> name;
		cout << "学号" << endl;
		cin >> number;
		cout << "性别（1为女生0为男生）" << endl;
		cin >> gender;
		cout << "高考成绩" << endl;
		cin >> score;
		cout << "身高" << endl;
		cin >> high;
		cout << "体重" << endl;
		cin >> weight;
		cout << "出生日期" << endl;
		cin >> year;
		cin >> month;
		cin >> day;
		cout << "家庭住址" << endl;
		cin >> address;
	}
	void display()
	{
		cout << "输出学生基本信息：" << endl;
		cout << "名字:" << name << endl;
		cout << "学号" << number << endl;
		cout << "性别(1为女生0为男生）:" << gender << endl;
		cout << "高考成绩:" << score << endl;
		cout << "身高:" << high << endl;
		cout << "体重" << weight << endl;
		cout << "出生日期:" << year << "-" << month << "-" << day << endl;
		cout << "家庭住址:" << address << endl;
	}
	void rewrite()
	{
		cout << "请输入数字修改学生基本信息：" << endl;
		cout << "输入0不修改" << endl;
		cout << "输入1修改姓名" << endl;
		cout << "输入2修改学号" << endl;
		cout << "输入3修改性别" << endl;
		cout << "输入4修改高考成绩" << endl;
		cout << "输入5修改身高" << endl;
		cout << "输入6修改体重" << endl;
		cout << "输入7修改出生日期" << endl;
		cout << "输入8修改家庭住址" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:cout << "修改姓名"; cin >> name;
			break;
		case 2:cout << "修改学号"; cin >> name;
			break;
		case 3:cout << "修改性别"; cin >> gender;
			break;
		case 4:cout << "修改高考成绩"; cin >> name;
			break;
		case 5:cout << "修改身高"; cin >> name;
			break;
		case 6:cout << "修改体重"; cin >> name;
			break;
		case7:cout << "修改出生年月日"; cin >> year >> month >> day;
			break;
		case 8:cout << "修改家庭住址"; cin >> address;
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