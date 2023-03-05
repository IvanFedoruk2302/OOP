#include "equatations.h";
using namespace std;

eq2::eq2(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D=0;
}

eq2 eq2::operator+(eq2& other) {
    eq2 temp=other;
    temp.a += this->a;
    temp.b += this->b;
    temp.c += this->c;
    return temp;
}

void eq2::operator=(const eq2& other) {
    this->a = other.a;
    this->b= other.b;
    this->c = other.c;
}

void eq2::set(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
}

double eq2::find_X() {
    D = b * b - 4 * a * c;
    if (D < 0) {
        cout << "Корней нет" << endl;
        return 0;
    }
    else {
        if (D == 0) {
            cout << "Корень один: ";
            double x = -b / (2 * a);
            cout << x << endl;
            return x;
        }
        else {
            cout << "Корней 2, наибольший: ";
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            if (x1 > x2) {
                cout << x1 << endl;
                return x1;
            }
            else {
                cout << x2 << endl;
                return x2;
            }
        }
    }
}

double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
};


