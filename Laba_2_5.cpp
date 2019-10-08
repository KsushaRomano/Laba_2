using namespace std;

#include <iostream>
#include <Math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, AB, BC, AC, S, P, p;
	cout << "Введите координату точки A: ";
	cin >> x1 >> y1;
	cout << "Введите координату точки B: ";
	cin >> x2 >> y2;
	cout << "Введите координату точки C: ";
	cin >> x3 >> y3;
	AB = sqrt(pow((x2 - x1), 2 ) + pow((y2 - y1), 2));
	BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	AC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	P = AB + BC + AC;
	p = P / 2;
	S = sqrt(p * (p - AC) * (p - BC) * (p - AC));
	cout << "Периметр треугольника равен: " << P << endl;
	cout << "Площадь треугольника равен: " << S;
}