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

    Cone* arr = new Cone[3];
    for (int i = 0; i < 3; i++) {
        cout << "Введите данные " << i + 1 << " конуса: " << endl;
        cin >> arr[i];
        cout << arr[i];
        cout << "Объём: " << arr[i].volume() << endl;
        cout << "Площадь : " << arr[i].area() << endl;
    }
    delete[] arr;
    
    int n = 0;
    cout << "Введите кол-во усеченных конусов\n";
    cin >> n;
    truncated* arr1 = new truncated[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите данные  " << i + 1 << " усеченного конуса: " << endl;
        cin >> arr1[i];
        cout << arr1[i];
        cout << "Объём: " << arr1[i].volume() << endl;
        cout << "Площадь поверхности: " << arr1[i].area() << endl;
    }
    delete[] arr1;

    return 0;
}