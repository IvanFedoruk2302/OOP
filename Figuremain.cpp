#include "figure.h";
#include <iostream>;

int main()
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < 3; i++)
	{
		float x1, x2, x3, x4, y1, y2, y3, y4;
		cout << "������� ���������� ������ �������:\n ";
		cout << "X1: ";
		cin >> x1;
		cout << "Y1: ";
		cin >> y1;
		cout << "������� ���������� ������ �������:\n  ";
		cout << "X2:  ";
		cin >> x2;
		cout << "Y2:  ";
		cin >> y2;
		cout << "������� ���������� ������ �������:\n  ";
		cout << "X3:  ";
		cin >> x3;
		cout << "Y3:  ";
		cin >> y3;
		cout << "������� ���������� ��������� �������:\n  ";
		cout << "X4:  ";
		cin >> x4;
		cout << "Y4:  ";
		cin >> y4;
		figure Figure(x1, x2, x3, x4, y1, y2, y3, y4);
		Figure.show();
		if (Figure.is_prug() == 1)
		{
			cout << "������������� �������� ���������������\n  ";
		}
		else {
			cout << "������������� �� �������� ���������������\n  ";
		}

		if (Figure.is_square() == 1)
		{
			cout << "������������� �������� ���������\n  ";
		}
		else {
			cout << "������������� �� �������� ���������\n  ";
		}

		if (Figure.is_romb() == 1)
		{
			cout << "������������� �������� ������\n  ";
		}
		else {
			cout << "������������� �� �������� ������\n  ";
		}


		if (Figure.is_in_circle() == 1)
		{
			cout << "��������������� ����� ���� ������ � ����������\n  ";
		}
		else {
			cout << "��������������� �� ����� ���� ������ � ����������\n  ";
		}


		if (Figure.is_out_circle() == 1)
		{
			cout << "� �������������� ����� ���� ������� ����������\n   ";
		} 
		else {
			cout << "� �������������� �� ����� ���� ������� ����������\n   ";
		}
	}
}