using namespace std;

#include <iostream>
#include <Math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, a, b, P, S;
	cout << "Введите координаты 1 точки: ";
	cin >> x1 >> y1;
	cout << "Введите координаты 2 точки: ";
	cin >> x2 >> y2;
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	P = 2 * (a + b);
	S = a * b;
	cout << "Периметр прямоугольника равен: " << P << endl;
	cout << "Площадь прямоугольника равна: " << S;
}