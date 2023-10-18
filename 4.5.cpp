// Lab_04_3.cpp
// < Зозюк Влад >
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 8
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, r;	
	double r3, r4;
	cout << "R = "; cin >> r;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
	
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (x * x + y * y <= r * r && !(x <= y && y <= -x) && -r <= y && y <= r && r >= x && x >= -r)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	cout << "R3 = "; cin >> r3;
	cout << "R4 = "; cin >> r4;

		for (int i = 0; i < 10; i++)
		{
			x = -r3 + rand() * (r3 + r3) / RAND_MAX;
			y = r4 + rand() * (r4 + r4)  / RAND_MAX;
			if (x * x + y * y <= r * r && !(x <= y && y <= -x) && -r <= y && y <= r && r >= x && x >= -r)
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}