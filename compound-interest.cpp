#include "io.h"
#include <iostream>
#include <cmath>

/* Test expected output:
Principal: 1500
Interest Rate: 12.5
Time Span: 3

Compound Interest: 635.742
Total Amount: 2135.74
*/

double calculateInterest(double principal, double rate, double timespan)
{
	return principal * pow((1 + rate / 100.00), timespan);
}

int main()
{
	// get user input for principal, rate, and time span
	std::cout << "Principal: ";
	double principal{};
	std::cin >> principal;

	std::cout << "Interest Rate: ";
	double rate{};
	std::cin >> rate;

	std::cout << "Time Span: ";
	double timespan{};
	std::cin >> timespan;

	// define and initialize total_amount and compound_interest 
	double total_amount{};
	total_amount = calculateInterest(principal, rate, timespan);
	double compound_interest{};
	compound_interest = total_amount - principal;

	// print calculations for compound interest and total amount
	std::cout << '\n' << "Compound Interest: " << compound_interest << '\n';
	std::cout << "Total Amount: " << total_amount << '\n';

	return 0;
}