#include <iostream>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "�����: ����� �������� �" << endl;
    }
    void show() {
        cout << "���������:  0 = 0" << endl;
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
        cout << "�����:  � = 0" << endl;
    }
    void show() {
        cout << "��������� " << A << "* x^2 = 0" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "������ ������: " << endl;
    type1 Example1;
    Example1.Get_answer();
    Example1.show();
    cout << "������ ������: " << endl;
    type2 Example2(4);
    Example2.Get_answer();
    Example2.show();
    return 0;
}