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
		cout << "调用无参构造函数" << endl;
	}
	point(double a, double b)
	{
		this->x = a;
		this->y = b;
		cout << "调用有参构造函数" << endl;
	}
	point(const point &r)
	{
		this->x = r.x;
		this->y = r.y;
		cout << "调用拷贝函数" << endl;
	}
	~point()
	{
		cout << "调用析构函数" << endl;
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
		cout << "修改后x=" << x << endl;
	}
	void sety(double bx)
	{
		y = bx;
		cout << "修改后y=" << y << endl;
	}
	void swapaxis()                                             
	{
		double &xa = y;
		double &xb = x;
		cout << "交换之后的x=" << xa  << endl;
		cout << "交换之后的y=" << xb << endl;
	}
	friend double getlength(point &A, point &B)                                       
	{
		double l;
		l = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
		cout << "两点之间距离为：" << l << endl;
		return l;
	}
};
int main()
{
	point A(3,2);
	point B(4,5);
	point C = B;
	cout << "A的坐标为：" << endl;
	A.getx(); 
	A.gety();
	cout << "修改后A的坐标为：" << endl;
	A.setx(2);
	A.sety(3);
	cout << "交换后A的坐标为：" << endl;
	A.swapaxis();                                                           
	cout << "A,B：" << endl;
	getlength(A, B);
	cout << "A,C：" << endl;
	getlength(A, C);
	system("pause");
	return 0;
}