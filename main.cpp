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
	}
	delete[] arr;
	return 0;
}
