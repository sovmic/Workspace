#include <iostream>
#include <cmath>

using namespace std;

// Общий вид интропретируемого выражения:
// (cos(a^3 - pi)^2) * ((e^(-b^2 + 4.9))/(a-b)^3)^0.5

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Вас приветствует калькулятор математического выражения: (cos(a^3 - pi)^2) * ((e^(-b^2 + 4.9))/(a-b)^3)^0.5" << endl;
    cout << "От пользователя требуется ввести два значения (не целочисленных) переменных a и b." << endl << "Пожалуйста, введите значения переменных: " << endl;
    long double num_a, num_b, temp, tnum, znach;
    cin >> num_a >> num_b;
    const double pi = 3.141592653589793;
    // Разбиение программы по дейсвтвиям. Первым делом решим: ((e^(-b^2 + 4.9))/(a-b)^3)^0.5
    tnum = pow(num_b, 2);
    temp = exp(tnum + 4.9) / pow((abs(num_a - num_b)), 3);
    tnum = sqrt(temp);
    // Перейдём к следующему действию: (cos(a^3 - pi)^2)
    temp = pow(cos(pow(num_a, 3) - pi), 2);
    // Умножим скобки друг на друга: (cos(a^3 - pi)^2) * (((e^(-b^2 + 4.9))/(a-b)^3)^0.5)
    znach = temp * tnum;
    cout << "Расчёты по формулам возвращают значения: ";
    cout << fixed << setprecision(3) << znach;
}
