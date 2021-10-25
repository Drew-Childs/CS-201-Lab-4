//Drew Childs, Lab04

#pragma once
#include <iostream>
#include <string>
using namespace std;


void deposit(float& account, float amount);

char MainMenu();

float GetValue(string input_string);

float GetValue(string input_string, int upper_limit);

float GetInterestRate(int credit_score);

void deposit(float& account, float amount);

int GetLoanMonths();