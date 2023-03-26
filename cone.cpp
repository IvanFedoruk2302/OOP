#include "cone.h";
Cone::Cone() {
	x = y = z = radius = height = 0;
}
Cone::Cone(double r, double h) {
	x = y = z = 0.0;
	radius = r;
	height = h;
}
Cone::Cone(double a, double b, double c, double r, double h) {
    x = a;
    y = b;
    z = c;
    radius = r;
    height = h;
}
void Cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void Cone::setRadius(double r) { radius = r; }
void Cone::setHeight(double h) { height = h; }
double Cone::getRadius() { return radius; }
double Cone::getHeight() { return height; }
double Cone::area() {
    double l = sqrt(height * height + radius * radius);
    return pi * radius * (radius + l);
}
double Cone::volume() {
    return pi * radius * radius * height / 3;
}
ostream& operator<< (ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
}
istream& operator>> (istream& stream, Cone& obj) {
    stream >> obj.x;
    stream >> obj.y;
    stream >> obj.z;
    stream >> obj.radius;
    stream >> obj.height;
    return stream;
}

truncated::truncated() {
    height2 = radius2 = 0;
};

truncated::truncated(double r, double r2, double h2) {
    height2 = h2;
    radius2 = r * h2 / Cone::height;
}

double truncated::area() {
    double l = sqrt(height2 * height2 + (radius - radius2) * (radius - radius2));
    return pi * (radius + radius2) * l + pi * radius * radius + pi * radius2 * radius2;
}

double truncated::volume() {
    return pi * height2 * (radius2 * radius2 + radius2 * radius + radius * radius) / 3;
}

ostream& operator<< (ostream& stream,  truncated obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z;
    stream << "),  верхний радиус = " << obj.radius;
    stream << ",  нижний радиус = " << obj.radius2;
    stream << ", высота = " << obj.height2 << endl;
    return stream;
}

istream& operator>> (istream& stream, truncated & obj) {
    stream >> obj.x >> obj.y >> obj.z >> obj.radius >> obj.radius2 >> obj.height2;
    return stream;
}