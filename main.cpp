#include "cone.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Cone c1(3, 7);              
    Cone c2(1, 2, 3, 5, 10);
    Cone c3(3, 5, 7, 8, 9);
    cout << "Конус 1: " << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";

    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";

    cout << "Конус 3: " << c3;
    cout << "Площадь поверхности: " << c3.area() << "\n";
    cout << "Объем: " << c3.volume() << "\n";

    return 0;
}