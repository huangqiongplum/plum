#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
private:
	float a, b, c;
	float s, l;
public:
	triangle(float a, float b, float c)
	{
		if (a + b > c&&a + c > b&&b + c > a)
		{
			this->a = a;
			this->b = b;
			this->c = c;
		}
		else
		{
			cout << "The three number can't form a triangle." << endl;
			exit(0);
		}
	}
	float perimeter()
	{
		l= a + b + c;
		return l;
	}
	float area()
	{
		float p = perimeter() / 2;
		s=sqrt(p*(p - a)*(p - b)*(p - c));
		return s;
	}
};
int main()
{
	float x, y, z;
	cout << "请输入三角形的三边边长：";
	cin >> x >> y >> z;
	triangle c( x,y,z);
	cout << "The perimeter of the triangle is:" << c.perimeter() << endl;
	cout << "The area of the triangle is:" << c.area() << endl;
	system("pause");
	return 0;
}