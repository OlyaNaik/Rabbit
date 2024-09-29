#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RU");
	bool isHuman = false;
	if (argc <= 1 || strcmp(argv[1], "false") != 0)
	{
		isHuman = true;
	}
	double x, y;
	if (isHuman) {
		cout << "Дан треугольник с координатами вершин (0; 0), (3; 0), (0; 4)." << endl;
		cout << "Для того, чтобы проверить, находится ли точка в данном треугольнике, введите через пробел координату по оси x, а потом по оси y." << endl;
		cout << "Если число дробное, то его следует писать через точку." << endl;
	}
	do {
		if (isHuman) {
			cout << "Введите координаты точки (x ; y)" << endl;
		}
		cin >> x;
		cin >> y;
		if (!cin) {
			if (isHuman) {
				cout << "Введёные вами данные не являются числом или введены некорректно" << endl;
			}
			break;
		}
		if (x == 0 && y == 0) {
			break;
		}
		if (0 <= x && 3 >= x) {
			if (0 <= y && (-4 * x / 3 + 4) >= y) {
				if (isHuman)
				{
					cout << "Данная точка входит в треугольник" << endl;
				}
				else {
					cout << "YES" << endl;
				}
			}
			else {
				if (isHuman) {
					cout << "Данная точка не входит в треугольник" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
		}
		else {
			if (isHuman) {
				cout << "Данная точка не входит в треугольник" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	} while (x != 0 or y != 0);
	if (isHuman) {
		cout << "Конец программы." << endl;
		system("pause");
		return 0;
	}
	else {
		return 0;
	}
}