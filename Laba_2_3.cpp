using namespace std;

#include <iostream>
#include <Math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, C, BC, AC, P;
	cout << "Введите координату точки A: ";
	cin >> A;
	cout << "Введите координату точки B: ";
	cin >> B;
	cout << "Введите координату точки C: ";
	cin >> C;
	if ((A < C) & (C < B)) {

		AC = abs(C - A);
		BC = abs(B - C);
		P = AC * BC;
		cout << "Длина отрезка AC равна: " << AC << endl;
		cout << "Длина отрезка BC равна: " << BC << endl;
		cout << "Произведение длин отрезков AC и BC равно: " << P;
	}
	else {
		cout << "Неправильный ввод данных";
	}
}