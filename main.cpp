#include "equatations.h";
using namespace std;

int main()
{   
    double a, b, c, x;
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение переменных первого квадратного уравнения: " << endl;
    cin >> a >> b >> c;
    eq2 exmpl1(a, b, c);
    cout << exmpl1.find_X() << endl;
    cout << "Введите значение X для нахождения значения Y: " << endl;
    cin >> x;
    cout << "Значение Y = " << exmpl1.find_Y(x) << endl;
    cout << "___________________________________________________\n";


    cout << "Введите значение переменных второго квадратного уравнения: " << endl;;
    cin >> a >> b >> c;
    eq2 exmpl2(a, b, c);
    cout  << exmpl2.find_X() << endl;
    cout << "Введите значение X для нахождения значения Y: " << endl;
    cin >> x;
    cout << "Значение Y= " << exmpl2.find_Y(x) << endl;
    cout << "___________________________________________________\n";


    eq2 exmpl3(a,b,c);
    exmpl3 = (exmpl2 + exmpl1);
    cout << "Третье уравнение: " << endl;
    cout << exmpl3.find_X() << endl;
    cout << "Введите значение X для нахождения значения Y в третьем уравнении: " << endl;
    cin >> x;
    cout << "Значение Y= " << exmpl3.find_Y(x) << endl;
}