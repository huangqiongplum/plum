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
		cout << "无参函数被调用" << endl;
	}
	student(int id, const char *user_name, int age, string address)
	{
		cout << "构造函数被调用" << endl;
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
		cout << "调用拷贝函数" << endl;
	}
	~student()
	{
		cout << "析构函数被调用" << endl;
		delete[]name;
		delete[]n;
	}
	void display()
	{
		cout << "输出学生基本信息：" << endl;
		cout << "名字:" << n << endl;
		cout << "学号" << id << endl;
		cout << "年龄" << age << endl;
		cout << "家庭住址:" << address << endl;
	}
	void input()
	{
		cout << "输入姓名" << endl;
		cin >> n;
		cout << "请输入学号：" << endl;
		cin >> id;
		cout << "请输入年龄：" << endl;
		cin >> age;
		cout << "请输入家庭住址" << endl;
		cin >> address;
	}
	void rewrite()
	{
		cout << "请输入数字修改学生基本信息：" << endl;
		cout << "输入0不修改" << endl;
		cout << "输入1修改姓名" << endl;
		cout << "输入2修改学号" << endl;
		cout << "输入3修改年龄" << endl;
		cout << "输入4修改家庭住址" << endl;
		int s;
		cin >> s;
		switch (s)
		{
		case 1:cout << "修改姓名"; cin >> n;
			break;
		case 2:cout << "修改学号"; cin >> id;
			break;
		case 3:cout << "修改年龄"; cin >> age;
			break;
		case 4:cout << "修改家庭住址"; cin >> address;
			break;
		default:break;
		}
		cout << "修改结束" << endl;
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
	student  t1(id, name, 19,  "贵州");
	student t2 = t1;
	t1.display();
	t2.display();
	system("pause");
	return 0;
}