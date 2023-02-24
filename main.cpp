#include <iostream>
#include "Triangle.h"

void main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle;
	Triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Введите a, b, и c для треугольников N№ " << i + 1 << " через пробел: " << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exist_tr())) {
			mas[i].show();
			cout << "Треугольник с такими сторонами не существует, попробуйте ещё раз" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << "Периметр треугольника: " << mas[i].perimetr() << endl;
		cout << "Площадь треугольника: " << mas[i].square() << endl;
	}
}


