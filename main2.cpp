#include <iostream>
#include "Circle.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	float r[3], x[3], y[3], trian[3]{4,3,5};
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите координаты центра окружности и её радиус для " << i + 1 << " окружности" << endl;
		cout << "Радиус: ";
		cin >> r[i];
		cout << "X центра: ";
		cin >> x[i];
		cout << "Y центра: ";
		cin >> y[i];
	}

	Circle Circle1(r[0], x[0], y[0]);
	Circle Circle2(r[1], x[1], y[1]);
	Circle Circle3(r[2], x[2], y[2]);

	cout << "Площадь первой окружности: " << Circle1.square() <<"\n";
	cout << "Площадь второй окружности: " << Circle2.square() <<"\n";
	cout << "Площадь третей окружности: " << Circle3.square() << "\n";


	if (Circle1.triangle_around(trian[0], trian[1], trian[2]) == 1) {
		cout << "Около первого треугольника можно описать окружность\n ";
	}
	else {
		cout << "Около первого треугольника нельзя описать окружность\n ";
	}

	if (Circle2.triangle_around(trian[0], trian[1], trian[2]) == 1) {
		cout << "Около второго треугольника можно описать окружность\n ";
	}
	else {
		cout << "Около второго треугольника нельзя описать окружность\n ";
	}

	if (Circle3.triangle_around(trian[0], trian[1], trian[2]) == 1) {
		cout << "Около третьего треугольника можно описать окружность\n ";
	}
	else {
		cout << "Около третьего треугольника нельзя описать окружность\n ";
	}



	if (Circle1.triangle_in(trian[0], trian[1], trian[2]) == 1) {
		cout << "В первый треугольник можно вписать окружность\n ";
	}
	else {
		cout << "В первый треугольник нельзя вписать окружность\n ";
	}

	if (Circle2.triangle_in(trian[0], trian[1], trian[2]) == 1) {
		cout << "Во второй треугольник можно вписать окружность\n ";
	}
	else {
		cout << "Во второй треугольник нельзя вписать окружность\n ";
	}

	if (Circle3.triangle_in(trian[0], trian[1], trian[2]) == 1) {
		cout << "В третий треугольник можно вписать окружность\n ";
	}
	else {
		cout << "В третий треугольник нельзя вписать окружность\n ";
	}




	if (Circle1.check_circle(trian[0], trian[1], trian[2]) == 1) {
		cout << "первая окружность пересекается со второй\n ";
	}
	else {
		cout << "первая окружность не пересекается со второй\n ";
	}

	if (Circle2.check_circle(trian[0], trian[1], trian[2]) == 1) {
		cout << "первая окружность  пересекается с второй\n ";
	}
	else {
		cout << "первая окружность не пересекается со второй\n ";
	}

	if (Circle3.check_circle(trian[0], trian[1], trian[2]) == 1) {
		cout << "первая окружность не пересекается со второй\n ";
	}
	else {
		cout << "первая окружность не пересекается со второй\n ";
	}
}









