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

		if (i > 0) {
			cout << "Сумма дробей: " << endl;
			(arr[i - 1] + arr[i]).show();

			cout << "Разность дробей: " << endl;
			(arr[i] - arr[i - 1]).show();

			cout << "Сравнение: " << endl;
			if (arr[i-1]==arr[i]){
				cout << "Дроби равны " << endl;
			}
			if (arr[i-1] > arr[i])
			{
				cout << "Первая дробь больше второй " << endl;
			}
			if (arr[i-1] < arr[i])
			{
				cout << "Вторая дробь больше первой " << endl;
			}

			cout << "числитель второй дроби увеличен на единицу: " << endl;
			(++arr[i]).show();


			cout << "Операция присваивания: " << endl;
			arr[i-1] = arr[i];
			cout << "Первая дробь: ";
			arr[i - 1].show();
			cout << "Вторая дробь: ";
			arr[i].show();
		}
	}
	delete[] arr;
	return 0;
}
