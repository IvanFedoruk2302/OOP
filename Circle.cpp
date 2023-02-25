#define _USE_MATH_DEFINES
#include "Circle.h";
#include <cmath>;

using namespace std;

Circle::Circle(float r, float x, float y) 
{
	radius = r;
	x_center = x;
	y_center = y;
}

void Circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square()
{
	float K = M_PI * pow(radius,2);
	return K;
}

bool Circle::triangle_around(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return (radius == ((a * b * c) / 4 * sqrt(p * (p - a) * (p - b) * (p - c))));
}

bool Circle::triangle_in(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return (radius == sqrt((p - a) * (p - b) * (p - c)) / p);
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float R = r;
	float xb = x_cntr;
	float yb = y_cntr;
	return (radius + R > sqrt(pow((xb - x_center), 2)) + pow((yb - y_center), 2));
}

