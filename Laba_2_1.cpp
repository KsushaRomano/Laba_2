using namespace std;

#include <iostream>
#include <Math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, R;
	cout << "Введите координаты 1 точки: ";
	cin >> x1 >> y1;
	cout << "Введите координаты 2 точки: ";
	cin >> x2 >> y2;
	R = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "Расстояние между точками равно: " << R;
}