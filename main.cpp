#include "rational.h";

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, k;
	cout << "������� ���������� �������� ������: " << endl;
	cin >> k;
	rational* arr = new rational[k];
	for (int i = 0; i < k; i++) {
		cout << "������� ��������� � ����������� " << i + 1 << " �����: " << endl;
		cin >> a >> b;
		arr[i].set(a, b);
		cout << i + 1 << " �����: " << endl;
		arr[i].show();

		if (i > 0) {
			cout << "����� ������: " << endl;
			(arr[i - 1] + arr[i]).show();

			cout << "�������� ������: " << endl;
			(arr[i] - arr[i - 1]).show();

			cout << "���������: " << endl;
			if (arr[i-1]==arr[i]){
				cout << "����� ����� " << endl;
			}
			if (arr[i-1] > arr[i])
			{
				cout << "������ ����� ������ ������ " << endl;
			}
			if (arr[i-1] < arr[i])
			{
				cout << "������ ����� ������ ������ " << endl;
			}

			cout << "��������� ������ ����� �������� �� �������: " << endl;
			(++arr[i]).show();


			cout << "�������� ������������: " << endl;
			arr[i-1] = arr[i];
			cout << "������ �����: ";
			arr[i - 1].show();
			cout << "������ �����: ";
			arr[i].show();
		}
	}
	delete[] arr;
	return 0;
}
