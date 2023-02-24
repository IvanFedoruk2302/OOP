#pragma once
#include <iostream>
using namespace std;

class Triangle
{
private:
	double a, b, c;
public:
	bool exist_tr();
	void set(double a1, double a2, double a3);
	void show();
	double perimetr();
	double square();
};



