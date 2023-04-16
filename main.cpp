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

class type3 {
private:
    double C;
public:
    type3(double c1) {
        C = c1;
    }
    void Get_answer() {
        cout << "Корней нет" << endl;
    }
    void show() {
        cout << C << " = 0" << endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << C << " = 0" << endl;
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
    type2 Example2(3);
    Example2.Get_answer();
    Example2.show();

    cout << "Третий пример: " << endl;
    type3 Example3(3);
    Example3.Get_answer();
    Example3.show();

    cout << "Четверый пример: " << endl;
    type4 Example4(1, -25);
    Example4.Get_answer();
    Example4.show();

    return 0;

}
