#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	float x, res_a, res_b, res_c, res_d;
	cout << "Введите значение переменной х для вычисления следующих формул:\n";
	cout << "a. f(x) = x^3 + 2*x^2 - 3*x - 7\n" << "b. f(x) = sin^2(x) + cos(x) - 7\n" << "c. f(x) = e^x + ln(x)\n" << "d. f(x) = x^(3/2) + sin(x)^2 + e^(-x)\n";
	cin >> x;
	res_a = pow(x, 3) + 2 * pow(x, 2) - 3 * x - 7;
	res_b = sin(x) * sin(x) + cos(x) - 7;
	res_c = exp(x) + log(x);
	res_d = pow(x, 3 / 2) + pow(sin(x), 2) + exp(-x);
	cout << fixed << setprecision(4);
	cout << "a. f(" << x << ") = " << res_a << endl;
	cout << "b. f(" << x << ") = " << res_b << endl;
	cout << "c. f(" << x << ") = " << res_c << endl;
	cout << "d. f(" << x << ") = " << res_d << endl;
}