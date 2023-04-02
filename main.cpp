#include <iostream>
#include <Windows.h>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "Ответ: Любое значение Х" << endl;
    }
    void show() {
        cout << "Уравнение:  0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "Ответ:  Х = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << A << " * x^2 = 0" << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    cout << "Первый пример: " << endl;
    type1 Example1;
    Example1.Get_answer();
    Example1.show();
    cout << "Второй пример: " << endl;
    type2 Example2(4);
    Example2.Get_answer();
    Example2.show();
    return 0;
}
