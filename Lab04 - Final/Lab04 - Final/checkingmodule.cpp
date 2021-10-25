//Drew Childs, Lab04

#include <iostream>
#include <string>
using namespace std;

void deposit(float& account, float amount) {
	account += amount;		//deposits into account
}

char MainMenu() {		//prints main menu
	char user_input = 'X';
	cout << "Main Menu (Enter one of the following)" << endl;
	cout << "   D - Deposit" << endl << "   W - Withdrawal" << endl << "   L - Loan" << endl << "   Q - Quit" << endl;

	do {		//error handling if letter is valid or not
		cin >> user_input;
		user_input = toupper(user_input);
		if (!(user_input == 'D' || user_input == 'W' || user_input == 'L' || user_input == 'Q')) { //if character is not equal to any characters
			cout << "Enter a valid choice: ";
		}
	} while (!(user_input == 'D' || user_input == 'W' || user_input == 'L' || user_input == 'Q')); //do while character is not equal to any characters

	return user_input;
}

float GetValue(string input_string) {
	float amount = 0;
	while (amount <= 0) {		//displays user sting and determines if amount is greater than 0
		cout << input_string;
		cin >> amount;
		if (amount <= 0) {
			cout << "You must enter an amount greater than 0" << endl;
		}
	}
	return amount;
}

float GetValue(string input_string, int upper_limit) {
	float amount = 0;
	while (amount <= 0 && amount <= upper_limit) {		//will run while amount is less than or equal to upper limit and amount
		cout << input_string;
		cin >> amount;
		if (amount <= 0 || amount > upper_limit) {		//determines if amount is greater than upper limit of account or less than 0
			cout << endl << "You must enter an amount less than or equal to " << upper_limit << endl << endl;
			amount = 0;
		}
	}
	return amount;
}

float GetInterestRate(int credit_score) {
	float interest_rate = 0;
	if (credit_score < 500) {	//finds interest rate based on credit score
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
	account -= amount;		//withdrawals from account
}

int GetLoanMonths() {
	int loan_months;
	cout << endl << "How many months for the loan?   12, 24, 36, or 60 ==> ";

	do {		//error handling for if loan months is valid
		cin >> loan_months;
		if (!(loan_months == 12 || loan_months == 24 || loan_months == 36 || loan_months == 60)) {
			cout << endl << "You must enter 12, 24, 36 or 60 only ==> ";
		}
	} while (!(loan_months == 12 || loan_months == 24 || loan_months == 36 || loan_months == 60));

	return loan_months;
}

int GetCreditRating() {
	int credit_score = 0;

	cout << "What is your credit score? [300, 850] ==> ";		//gathers credit score and determines if valid or not
	while (credit_score < 300 || credit_score > 850) {
		cin >> credit_score;
		if (credit_score < 300 || credit_score > 850) {
			cout << endl << "You must choose a value from 300 - 850 inclusive ==> ";
		}
	}
	return credit_score;
}

float CalculateLoanAmount(float principal, float interest_rate, int num_months) {		//determines loan amount
	float loan_amount = 0;
	loan_amount = pow(principal * (1 + (interest_rate / 12)), num_months / 12);
	return loan_amount;
}

void OutputAccount(float account_balance) {		//outputs account balance
	cout << endl << "Summary of Account" << endl;
	cout << "Amount: $" << account_balance << endl << endl;
}