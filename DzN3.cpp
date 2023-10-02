#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float res = 0;
const float PI = 3.14159265;

float func_1(float x) {
	res = pow(x, 3) + 2 * pow(x, 2) - 3 * x - 7;
	return res;
}

float func_2(float x) {
	res = sin(x * PI / 180) * sin(x * PI / 180) + cos(x * PI / 180) - 7;
	return res;
}

float func_3(float x) {
	res = exp(x) + log(x);
	return res;
}

float func_4(float x) {
	res = pow(x, 3 / 2) + pow(sin(x), 2) + exp(-x);
	return res;
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	float num;
	cout << "Введите значение переменной х для вычисления следующих формул:\n";
	cout << "a. f(x) = x^3 + 2*x^2 - 3*x - 7\n" << "b. f(x) = sin^2(x) + cos(x) - 7\n" << "c. f(x) = e^x + ln(x)\n" << "d. f(x) = x^(3/2) + sin(x)^2 + e^(-x)\n";
	cin >> num;
	cout << fixed << setprecision(3);
	cout << "a. f(" << num << ") = " << func_1(num) << endl;
	cout << "b. f(" << num << ") = " << func_2(num) << endl;
	cout << "c. f(" << num << ") = " << func_3(num) << endl;
	cout << "d. f(" << num << ") = " << func_4(num) << endl;
}
