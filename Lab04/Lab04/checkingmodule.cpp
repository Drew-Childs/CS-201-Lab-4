//Drew Childs, Lab04

#include <iostream>
#include <string>
using namespace std;

void deposit(float& account, float amount) {
	account += amount;
}

char MainMenu() {
	char user_input = 'X';
	cout << "Main Menu (Enter one of the following)" << endl;
	cout << "        (D)eposit, (W)ithdrawal, (L)oan or (Q)uit" << endl;

	do {
		cin >> user_input;
		if (!(user_input == 'D' || user_input == 'W' || user_input == 'W' || user_input == 'Q')) {
			cout << "Enter a proper choice: ";
		}
	} while (!(user_input == 'D' || user_input == 'W' || user_input == 'W' || user_input == 'Q'));
	cin >> user_input;

	return user_input; //Error handling???
}

float GetValue(string input_string) {
	float amount = 0;
	cout << input_string;
	while (amount <= 0) {
		cin >> amount;
		if (amount <= 0) {
			cout << "Enter an amount greater than 0: ";
		}
	}
	return amount;
}

float GetValue(string input_string, int upper_limit) {
	float amount = 0;
	cout << "How much would you like to withdrawal?: ";
	while (amount <= 0 && amount <= upper_limit) {
		cin >> amount;
		if (amount <= 0 || amount > upper_limit) {
			cout << "Enter an amount greater than 0 or less than account balance: ";
		}
	}
	return amount;
}

float GetInterestRate(int credit_score) {
	float interest_rate = 0;
	if (credit_score < 500) {
		interest_rate = 0.05;
	}
	else if (credit_score > 500 && credit_score <= 700) {
		interest_rate = 0.03;
	}
	else {
		interest_rate = 0.01;
	}
	return interest_rate;
}

void Withdraw(float& account, float amount) {
	account -= amount;
}

int GetLoanMonths() {
	int loan_months;
	return 1;
}