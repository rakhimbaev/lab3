#include <iostream>
#include "math.h"
using namespace std;
void task(int N) {
	if (N == 1) {
		cout << "Задание №1\n";
		int a, b;
		cout << "ввести А и В\n";
		cin >> a >> b;
		int tmp = a;
		a = b;
		b = tmp;
		cout << "а=" << a << "," << "b=" << b;
	}
	if (N == 2) {
		cout << "Задание №2\n";
		int a, b, c;
		cout << "ввести a и b через пробел и нажать enter\n ";
		cin >> a >> b >> c;
		int tmp = a;
		a = c;
		c = b;
		b = tmp;
		cout << "a=" << a << "," << "b=" << b << "c=" << c << endl;
	}
	if (N == 3) {
		cout << "задание №3\n";
		int a, b, c;
		cout << "ввести а и b через пробел и нажать enter\n";
		cin >> a >> b >> c;
		int tmp = b;
		b = c;
		c = a;
		a = tmp;
		cout << "a=" << a << "b=" << b << "c=" << c << endl;
	}
	if (N == 4) {
		cout << "Задание №4\n";
		int x, y;
		cout << "ввести x и y через пробел и нажать enter \n";
		cin >> x;
		y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
		cout << "y=" << y << endl;

	}
	if (N == 5) {
		cout << "Задание №5\n";
		int x, y;
		cout << "ввести х\n";
		cin >> x;
		y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
		cout << "y=" << y << endl;
	}
	if (N == 6) {
		cout << "Задание №6 \n";
		int a;
		cout << "ввести а\n";
		cin >> a;
		int k = 2;
		cout << "a^8=" << pow(a, k) * pow(a, k) * pow(a, k) * pow(a, k) << endl;
	}
	if (N == 7) {
		cout << "Задание №7 \n";
		int a, a15;
		cout << "ввести а";
		cin >> a;
		int k = 3;
		a15 = pow(a, k) * pow(a, k) * pow(a, k) * pow(a, k) * pow(a, k) * 1;
		cout << "a^15=" << a15 << endl;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "лабараторная №6-" << "ввести номер задания=";
	cin >> N;
	task(N);
	cout << "если хотите решит задание то тнажмите 1, инача 0 и нажмите enter";
	int otvet;
	cin >> otvet;
	if (otvet == 1)
		main();
	return 0;
}
