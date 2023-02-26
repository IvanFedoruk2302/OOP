#include "figure.h";
#include <iostream>;

int main()
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < 3; i++)
	{
		float x1, x2, x3, x4, y1, y2, y3, y4;
		cout << "Введите координаты первой вершины:\n ";
		cout << "X1: ";
		cin >> x1;
		cout << "Y1: ";
		cin >> y1;
		cout << "Введите координаты второй вершины:\n  ";
		cout << "X2:  ";
		cin >> x2;
		cout << "Y2:  ";
		cin >> y2;
		cout << "Введите координаты третей вершины:\n  ";
		cout << "X3:  ";
		cin >> x3;
		cout << "Y3:  ";
		cin >> y3;
		cout << "Введите координаты четвертой вершины:\n  ";
		cout << "X4:  ";
		cin >> x4;
		cout << "Y4:  ";
		cin >> y4;
		figure Figure(x1, x2, x3, x4, y1, y2, y3, y4);
		Figure.show();
		if (Figure.is_prug() == 1)
		{
			cout << "Четыругольник является прямоугольником\n  ";
		}
		else {
			cout << "Четыругольник не является прямоугольником\n  ";
		}

		if (Figure.is_square() == 1)
		{
			cout << "Четыругольник является квадратом\n  ";
		}
		else {
			cout << "Четыругольник не является квадратом\n  ";
		}

		if (Figure.is_romb() == 1)
		{
			cout << "Четыругольник является ромбом\n  ";
		}
		else {
			cout << "Четыругольник не является ромбом\n  ";
		}


		if (Figure.is_in_circle() == 1)
		{
			cout << "Четырехугольник может быть вписан в окружность\n  ";
		}
		else {
			cout << "Четырехугольник не может быть вписан в окружность\n  ";
		}


		if (Figure.is_out_circle() == 1)
		{
			cout << "В четырёхугольник может быть вписана окружность\n   ";
		} 
		else {
			cout << "В четырёхугольник не может быть вписана окружность\n   ";
		}
	}
}