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

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "Корень уравнения: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x + " << C << " = 0" << endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней " << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    
class type7 {
    private:
    double B;
    public:
    type7 (double b1) {
        B = b1;
    }
    void Get_answer () {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void show () {
        cout << "Уравнение " << B << "*x = 0" << endl;
    }
};

class type8 {
    private:
    double A, B;
    public:
    type8 (double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer () {
                double x = ((-1)*B)/A;
                cout << "Корни уравнения: " << endl;
                cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show () {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
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

    cout << "Пятый пример: " << endl;
    type5 Example5(10,20);
    Example5.Get_answer();
    Example5.show();

    cout << "Шестой пример: " << endl;
    type6 Example6(1,5,6);
    Example6.Get_answer();
    Example6.show();
    
    cout << "Седьмой пример: " << endl;
    type7 Example7(5);
    Example7.Get_answer();
    Example7.show();
    
    cout << "Восьмой пример: " << endl;
    type8 Example8(1,5);
    Example8.Get_answer();
    Example8.show();
    return 0;

}
