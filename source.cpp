#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main();
int main2();
int sqrtsolve() {
	double num;
	double result;
	cout << "Enter number: ";
	cin >> num;
	result = sqrt(num);
	cout << result << "\n";
	main2();
}
int normalsolve() {
	double num1;
	double num2;
	double result;
	char sign;
	cout << "Num 1: ";
	cin >> num1;
	cout << "Num 2: ";
	cin >> num2;
	cout << "Sign (add, subtract, multiply, divide: +, -, *, /): ";
	cin >> sign;
	while (sign) {
		if (sign == '+') {
			cout << num1 + num2 << "\n";
			main2();
		}
		else if (sign == '-') {
			cout << num1 - num2 << "\n";
			main2();
		}
		else if (sign == '*') {
			cout << num1 * num2 << "\n";
			main2();
		}
		else if (sign == '/') {
			cout << num1 / num2 << "\n";
			main2();
		}
		else {
			cout << "Sign is invalid, choose one between these (add, subtract, multiply, divide: +, -, *, /)\n";
			main2();
		}
	
	}
}
int modulosolve() {
	int num1;
	int num2;
	cout << "Num 1: ";
	cin >> num1;
	cout << "Num 2: ";
	cin >> num2;
	cout << num1 % num2 << "\n";
	main2();
}
int question() {
	char ask;
	char test;
	cin >> ask;
	while (yn)
	if (ask == 'n') {
		normalsolve();
	}
	else if (ask == 's') {
		sqrtsolve();
	}
	else if (ask == 'm') {
		modulosolve();
	}
	else {
		cout << "Answer is invalid, choose n, s or m (n = normal, s = square root, m = modulo) *must NOT be capital*";
		main2();
	}
}
int main2() {
	cout << "\n\n";
	cout << "*******************************************\n";
	cout << "\t\tCALCULATOR\n";
	cout << "*******************************************\n";
	cout << "What do you want to do? (n = normal, s = square root, m = modulo): ";
	question();
}
int main() {
	cout << "By Ema yeah, dd/mm/yyyy 13/12/2023\n";
	main2();
}