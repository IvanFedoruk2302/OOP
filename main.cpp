#include "rational.h";

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, k;
	cout << "ВВедите количество вводимых дробей: " << endl;
	cin >> k;
	rational* arr = new rational[k];
	for (int i = 0; i < k; i++) {
		cout << "Введите числитель и знаменатель " << i + 1 << " дроби: " << endl;
		cin >> a >> b;
		arr[i].set(a, b);
		cout << i + 1 << " дробь: " << endl;
		arr[i].show();
	}
	delete[] arr;
	return 0;
}
