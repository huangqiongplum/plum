#include <iostream>
#include <string>
#include "cmath"
using namespace std;
class point
{
	double x, y;
public:
	point()
	{
		cout << "�����޲ι��캯��" << endl;
	}
	point(double a, double b)
	{
		this->x = a;
		this->y = b;
		cout << "�����вι��캯��" << endl;
	}
	point(const point &r)
	{
		this->x = r.x;
		this->y = r.y;
		cout << "���ÿ�������" << endl;
	}
	~point()
	{
		cout << "������������" << endl;
	}
	double getx()
	{
		cout << "x=" << x << endl;

		return x;
	}
	double gety()
	{
		cout << "y=" << y << endl;

		return y;
	}
	void setx(double ax)                                                              
	{
		x = ax;
		cout << "�޸ĺ�x=" << x << endl;
	}
	void sety(double bx)
	{
		y = bx;
		cout << "�޸ĺ�y=" << y << endl;
	}
	void swapaxis()                                             
	{
		double &xa = y;
		double &xb = x;
		cout << "����֮���x=" << xa  << endl;
		cout << "����֮���y=" << xb << endl;
	}
	friend double getlength(point &A, point &B)                                       
	{
		double l;
		l = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
		cout << "����֮�����Ϊ��" << l << endl;
		return l;
	}
};
int main()
{
	point A(3,2);
	point B(4,5);
	point C = B;
	cout << "A������Ϊ��" << endl;
	A.getx(); 
	A.gety();
	cout << "�޸ĺ�A������Ϊ��" << endl;
	A.setx(2);
	A.sety(3);
	cout << "������A������Ϊ��" << endl;
	A.swapaxis();                                                           
	cout << "A,B��" << endl;
	getlength(A, B);
	cout << "A,C��" << endl;
	getlength(A, C);
	system("pause");
	return 0;
}