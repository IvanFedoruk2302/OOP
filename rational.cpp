#include "rational.h";

int rational::NOD(int a, int b)
{
	if (a % b == 0) {
		return b;
	}
	if (b % a == 0) {
		return a;
	}
	if (a > b) {
		return NOD(a % b, b);
	}
	return NOD(a, b % a);
}

rational::rational(int a1, int b1) {
	if (b1 == 0) {
		cout << "Знаменатель равен нулю ";
		a = 0;
		b = 0;
	}
	if (a1 * b1 <= 0) {
		a = (abs(a1) % abs(b1)) * -1;
		b = abs(b1);
	}
	else{
		a = (abs(a1) % abs(b1));
		b = abs(b1);
	} 
	
	int N = NOD(abs(a), abs(b));
	a = a / N;
	b = b / N;
}


void rational::set(int a1, int b1) {
	if (b1 == 0) {
		cout << "Знаменатель равен нулю ";
		a = 0;
		b = 0;
	}
	if (a1 * b1 <= 0) {
		a = (abs(a1) % abs(b1)) * -1;
		b = abs(b1);
	}
	else {
		a = (abs(a1) % abs(b1));
		b = abs(b1);
	}
	int N = NOD(abs(a), abs(b));
	a = a / N;
	b = b / N;
}


void rational::show() {
	if (a == 0) {
		cout << "Дробь равна нулю " << endl;
	}
	else {
		cout << a << "/" << b << endl;
	}
}
rational::rational() {
	a = 0;
	b = 1;
}


rational rational::operator+(const rational& other) {
	rational temp(other.a, other.b);
	temp.set(a * other.b + b * other.a, b * other.b);
	return temp;
}

bool rational::operator==(const rational& other) {
	return ((this->a == other.a) and (this->b = other.b));
}

bool rational::operator>(const rational& other) {
	return ((this->a * other.b) > (other.a * this->b));
}

bool rational::operator<(const rational& other) {
	return ((this->a * other.b) < (other.a * this->b));
}

void rational::operator=(const rational& other)
{
	this->a = other.a;
	this->b = other.b;
}

rational operator-(const rational& other1,const rational& other2)
{
	rational temp(other1.a, other1.b);
	temp.set(other1.a * other2.b - other1.b * other2.a, other2.b * other1.b);
	return temp;
}

rational& rational::operator++()
{
	a++;
	return *this;
}

rational& rational::operator++(int value)
{
	rational temp(*this);
	this->a++;
	return temp;
}

