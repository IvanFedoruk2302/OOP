#include "figure.h";

figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
	float a,b,c,d;
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
	a= sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	P = a + b + c + d;
	S = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - y1 * x2 - y2 * x3 - y3 * x4 - y4 * x1);
}
void figure::show()
{
	cout << "Координаты первой точки: " << x1 << " " << y1 << endl;
	cout << "Координаты второй точки: " << x1 << " " << y1 << endl;
	cout << "Координаты третей точки: " << x1 << " " << y1 << endl;
	cout << "Координаты четвертой точки: " << x1 << " " << y1 << endl;
	cout << "Периметр: " << P <<  endl;
	cout << "Площадь: " << S << endl;
}
bool figure::is_prug()
{
	float D1,D2;
	D1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	D2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	return D1 == D2;
}
bool figure::is_romb()
{
	float a, b, c, d;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	return (a == b && b == c && c == d);
}
bool figure::is_square()
{
	return this->is_romb() and this->is_prug();
}
bool figure::is_in_circle()
{
	float D1, D2, a, b, c, d;
	D1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	D2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	return D1 * D2 == a * c + b * d;
}
bool figure::is_out_circle()
{
	float a, b, c, d;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	return ((a + c) == (b + d));
}