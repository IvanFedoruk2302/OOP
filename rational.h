#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class rational
{
private:
	int a, b;
	int NOD(int a1, int b1);
public:
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
};
