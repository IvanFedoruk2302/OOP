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
