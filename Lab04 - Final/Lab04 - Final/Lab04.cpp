//Drew Childs, Lab04

#include <iostream>
#include <string>
#include "checkingmodule.h"
using namespace std;

int main() {
	float amount = 0, account = 0, principal = 0, loan_amount = 0, interest_rate = 0;
	char user_choice = 'y';
	string input_string = "";
	int credit_score = 0, loan_months = 0;

	while (user_choice != 'Q') {		//switch case to determine action based off of user choice
		user_choice = MainMenu();

		switch (user_choice)
		{
		case 'D':		//Deposit
			input_string = "How much do you want to deposit? ==> ";
			deposit(account, GetValue(input_string));
			OutputAccount(account);
			break;
		case 'W':		//Withdrawal
			input_string = "How much do you want to withdraw? ==> ";
			Withdraw(account, GetValue(input_string, account));
			OutputAccount(account);
			break;
		case 'L':		//Loan
			input_string = "\nHow much do you want to borrow?   ";
			credit_score = GetCreditRating();
			loan_months = GetLoanMonths();
			principal = GetValue(input_string);
			interest_rate = GetInterestRate(credit_score);
			loan_amount = CalculateLoanAmount(principal, interest_rate, loan_months);

			cout << endl << endl << "Interest Rate: " << interest_rate << endl;
			cout << "Principal: " << principal << endl;
			cout << "Months: " << loan_months << endl;
			cout << "Your total loan amount is " << loan_amount << endl << endl;
			break;
		default:		//Quit
			break;
		}
	}

	return 0;
}