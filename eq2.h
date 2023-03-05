#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class eq2 {
private:
    double a, b, c;
    double D;
public:
    void operator = (const eq2& other);
    eq2(double a1, double b1, double c1);
    eq2 operator+(eq2& other);
    void set(double a1, double b1, double c1);
    double find_X();
    double find_Y(double x1);
};
