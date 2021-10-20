#include <iostream>
using namespace std;
int main() {
	// 1
	double a, b, s, p;
	cin >> a >> b;
 s = a * b;
 p = 2 * (a + b);
	cout<< "s=: "<< s<< "\n"<< "p= "<< p<< endl;

	cout<< endl;

	// 2
	double d;
	cin>> d;
	double l = 3.14 * d;
	cout<< "l=: " <<l<< endl;

	cout << endl;

	// 3
	cin>> a>> b;
	cout <<"srednee arifmeticheskoe=" <<(a + b) / 2 << endl;

	cout << endl;

	// 4
	cin >> a>> b;
	cout<< "sum: "<< a * a + b * b<< endl<< "raznost "<< a * a - b * b<< endl<< "proz=: "<< a * a * b * b << endl<< "chislo kvadratov= "<<(a * a) / (b * b)<< endl;

	cout << endl;

	// 5
	cin >> a >> b;
	cout << "sum= " << a + b << endl << "raznost= " << a - b << endl << "proz= " << a * b << endl << "chislo kvadratov= " <<(a * a) / (b * b) << endl;

	cout << endl;
	return 0;
}