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
int sqrtquestion() {
	char yn;
	char test;
	cin >> yn;
	while (yn)
	if (yn == 'y') {
		sqrtsolve();
	}
	else if (yn == 'n') {
		normalsolve();
	}
	else {
		cout << "Answer is invalid, choose y or n (y = yes, n = no) *must NOT be capital*";
		main2();
	}
}
int main2() {
	cout << "\n\n";
	cout << "*******************************************\n";
	cout << "\t\tCALCULATOR\n";
	cout << "*******************************************\n";
	cout << "Do you want to do a square root? (y/n): ";
	sqrtquestion();
}
int main() {
	cout << "By Ema yeah, dd/mm/yyyy 13/12/2023\n";
	main2();
}