#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	const int pi = 3.14159265359;
	float num_1, num_2, result = 0;
	int op;
	char state;
	cout << "Вас привествует калькулятор. Выберете операцию:\n";
	cout << "1) Сложение.\n" << "2) Вычитание.\n" << "3) Умножение.\n" << "4) Вычисление sin(x).\n" << "5) Вычисление cos(x).\n" << "6) Вычисление квадратного корня из x.\n" << "7) Вычисление ln(x).\n";
	cin >> op;
	switch (op) {
	case 1: {
		cout << "Введите переменные x и y:\n";
		cin >> num_1 >> num_2;
		result = num_1 + num_2;
		cout << "Результат программы: " << result << endl;
		break;
	} case 2: {
		cout << "Введите переменные x и y:\n";
		cin >> num_1 >> num_2;
		result = num_1 - num_2;
		cout << "Результат программы: " << result << endl;
		break;
	} case 3: {
		cout << "Введите переменные x и y:\n";
		cin >> num_1 >> num_2;
		result = num_1 * num_2;
		cout << "Результат программы: " << result << endl;
		break;
	} case 4: {
		cout << "Введите переменную x:\n";
		cin >> num_1;
		cout << "Хотите видеть результат в градусах? ('Y' или 'N')\n";
		cin >> state;
		result = sin(num_1);
		if (state == 'Y') {
			result = (result * 180) / pi;
		}
		cout << "Результат программы: " << result << endl;
		break;
	} case 5: {
		cout << "Введите переменную x:\n";
		cin >> num_1;
		cout << "Хотите видеть результат в градусах? ('Y' или 'N')\n";
		cin >> state;
		result = cos(num_1);
		if (state == 'Y') {
			result = (result * 180) / pi;
		}
		cout << "Результат программы: " << result << endl;
		break;
	} case 6: {
		cout << "Введите переменную x:\n";
		cin >> num_1;
		result = sqrt(num_1);
		cout << "Результат программы: " << result << endl;
		break;
	} case 7: {
		cout << "Введите переменную x:\n";
		cin >> num_1;
		result = log(num_1);
		cout << "Результат программы: " << result << endl;
		break;
	}
	default: cout << "Выбрана неверная операция. Ошибка.";
		break;
	}
}