#include <iostream>
#include "Circle.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	float r[3], x[3], y[3], trian[3]{4,3,5};
	for (int i = 0; i < 3; i++)
	{
		cout << "������� ���������� ������ ���������� � � ������ ��� " << i + 1 << " ����������" << endl;
		cout << "������: ";
		cin >> r[i];
		cout << "X ������: ";
		cin >> x[i];
		cout << "Y ������: ";
		cin >> y[i];
	}

	Circle Circle1(r[0], x[0], y[0]);
	Circle Circle2(r[1], x[1], y[1]);
	Circle Circle3(r[2], x[2], y[2]);

	cout << "������� ������ ����������: " << Circle1.square() <<"\n";
	cout << "������� ������ ����������: " << Circle2.square() <<"\n";
	cout << "������� ������ ����������: " << Circle3.square() << "\n";


	if (Circle1.triangle_around(trian[0], trian[1], trian[2]) == 1) {
		cout << "����� ������� ������������ ����� ������� ����������\n ";
	}
	else {
		cout << "����� ������� ������������ ������ ������� ����������\n ";
	}

	if (Circle2.triangle_around(trian[0], trian[1], trian[2]) == 1) {
		cout << "����� ������� ������������ ����� ������� ����������\n ";
	}
	else {
		cout << "����� ������� ������������ ������ ������� ����������\n ";
	}

	if (Circle3.triangle_around(trian[0], trian[1], trian[2]) == 1) {
		cout << "����� �������� ������������ ����� ������� ����������\n ";
	}
	else {
		cout << "����� �������� ������������ ������ ������� ����������\n ";
	}



	if (Circle1.triangle_in(trian[0], trian[1], trian[2]) == 1) {
		cout << "� ������ ����������� ����� ������� ����������\n ";
	}
	else {
		cout << "� ������ ����������� ������ ������� ����������\n ";
	}

	if (Circle2.triangle_in(trian[0], trian[1], trian[2]) == 1) {
		cout << "�� ������ ����������� ����� ������� ����������\n ";
	}
	else {
		cout << "�� ������ ����������� ������ ������� ����������\n ";
	}

	if (Circle3.triangle_in(trian[0], trian[1], trian[2]) == 1) {
		cout << "� ������ ����������� ����� ������� ����������\n ";
	}
	else {
		cout << "� ������ ����������� ������ ������� ����������\n ";
	}




	if (Circle1.check_circle(trian[0], trian[1], trian[2]) == 1) {
		cout << "������ ���������� ������������ �� ������\n ";
	}
	else {
		cout << "������ ���������� �� ������������ �� ������\n ";
	}

	if (Circle2.check_circle(trian[0], trian[1], trian[2]) == 1) {
		cout << "������ ����������  ������������ � ������\n ";
	}
	else {
		cout << "������ ���������� �� ������������ �� ������\n ";
	}

	if (Circle3.check_circle(trian[0], trian[1], trian[2]) == 1) {
		cout << "������ ���������� �� ������������ �� ������\n ";
	}
	else {
		cout << "������ ���������� �� ������������ �� ������\n ";
	}
}









