using namespace std;

#include <iostream>
#include <Math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, C, BC, AC, S;
	cout << "Введите координату точки A: ";
	cin >> A;
	cout << "Введите координату точки B: ";
	cin >> B;
	cout << "Введите координату точки C: ";
	cin >> C;
	AC = abs(C - A);
	BC = abs(C - B);
	S = AC + BC;
	cout << "Длина отрезка AC равна: " << AC << endl;
	cout << "Длина отрезка BC равна: " << BC << endl;
	cout << "Сумма длин отрезков AC и BC равна: " << S;
}