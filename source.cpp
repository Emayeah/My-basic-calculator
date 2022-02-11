#include <iostream>
using namespace std;
int main() {
	double num1;
	double num2;
	char sign;
	double result;
	cout << "By Ema yeah, dd/mm/aaaa 11/02/2022\n";
	cout << "********************************************\n";
	cout << "\t\tCALCOLATRICE\n";
	cout << "********************************************\n";
	cout << "Numero 1: ";
	cin >> num1;
	cout << "Numero 2: ";
	cin >> num2;
	cout << "Segno: ";
	cin >> sign;
	while (sign) {
		if (sign == '+') {
			cout << num1 + num2 << "\n";
			break;
		}
		else if (sign == '-') {
			cout << num1 - num2 << "\n";
			break;
		}
		else if (sign == '*') {
			cout << num1 * num2 << "\n";
			break;
		}
		else if (sign == '/') {
			cout << num1 / num2 << "\n";
			break;
		}
		else {
			cout << "+ = piu', - = meno, * = per, / = diviso\n";
			break;
		}
	}
}