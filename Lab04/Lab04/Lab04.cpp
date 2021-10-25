//Drew Childs, Lab04

#include <iostream>
#include <string>
#include "checkingmodule.h"
using namespace std;

int main() {
	float amount = 0.0, account = 0.0;
	string input_string = "Enter amount of yeehaw's: ";

	cout << "Before " << account << endl;
	deposit(account, 10);
	cout << "After " << account << endl;

	MainMenu();

	GetValue(input_string);

	return 0;
}