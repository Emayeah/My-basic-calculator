#include <iostream>
using namespace std;
int main() {
	double num1;
	double num2;
	char sign;
	double result;
	char lol;
	cout << "By Ema yeah, dd/mm/aaaa 13/12/2023\n";
	cout << "********************************************\n";
	cout << "\t\tCALCULATOR\n";
	cout << "********************************************\n";
	cout << "Num 1: ";
	cin >> num1;
	cout << "Num 2: ";
	cin >> num2;
	cout << "Sign: ";
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
			cout << "+, -, *, /\n";
			break;
		}

	}
	cin >> lol;
}