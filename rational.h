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
	rational operator+(const rational & other);
	bool operator>(const rational& other);
	bool operator<(const rational& other);
	bool operator==(const rational& other);
	void operator=(const rational& other);
	friend rational operator-(const rational& other1, const rational& other2);
	rational& operator++();
	rational& operator++(int value);
};
