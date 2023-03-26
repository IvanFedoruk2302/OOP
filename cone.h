#pragma once
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cmath>
using namespace std;

const double pi = 3.14159265;

class Cone {
public:
    double x, y, z;
    double radius;
    double height;
    Cone();
    Cone(double r, double h);
    Cone(double a, double b, double c, double r, double h);
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double area();
    double volume();
    friend ostream& operator<<(ostream& stream, Cone obj);
    friend istream& operator>>(istream& stream, Cone& obj);
};

class truncated : public Cone {
protected:
    double height2;
    double radius2;

public:
    truncated();
    truncated(double r, double r2, double h2);
    double area();
    double volume();
    friend ostream& operator<< (ostream& stream, truncated obj);
    friend istream& operator>> (istream& stream, truncated& obj);
};