#include "cone.h"
int main()
{
    int n;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Cone c1(3, 7);              
    Cone c2(1, 2, 3, 5, 10);
    Cone c3(3, 5, 7, 8, 9);
    cout << "Ęîíóń 1: " << c1;
    cout << "Ďëîůŕäü ďîâĺđőíîńňč: " << c1.area() << "\n";
    cout << "Îáúĺě: " << c1.volume() << "\n";

    cout << "Ęîíóń 2: " << c2;
    cout << "Ďëîůŕäü ďîâĺđőíîńňč: " << c2.area() << "\n";
    cout << "Îáúĺě: " << c2.volume() << "\n";

    cout << "Ęîíóń 3: " << c3;
    cout << "Ďëîůŕäü ďîâĺđőíîńňč: " << c3.area() << "\n";
    cout << "Îáúĺě: " << c3.volume() << "\n";
    
	Cone* arr = new Cone[3];
	for (int i = 0; i < 3; i++) {
		cout << "Введите данные " << i + 1 << " конуса: " << endl;
		cin >> arr[i];
		cout << arr[i];
		cout << "Объём: " << arr[i].volume() << endl;
		cout << "Площадь : " << arr[i].area() << endl;
	}
    delete[] arr;
    
    return 0;
}
