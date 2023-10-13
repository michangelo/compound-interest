#include <iostream>
#include <cmath>

// forward declare calculateInterest function
double calculateInterest(double, double, double);

int main()
{
    // user input for principal 
	std::cout << "Principal: ";          
	double principal{};
	std::cin >> principal;

    // user input for rate
	std::cout << "Interest Rate: ";      
	double rate{};
	std::cin >> rate;

    // user input for time span
	std::cout << "Time Span: ";          
	double timespan{};
	std::cin >> timespan; 

    // initialize total_amount variable and call calculateInterest function
	double total_amount{};
	total_amount = calculateInterest(principal, rate, timespan);

    // initialize compound_interest variable and calculate 
	double compound_interest{};
	compound_interest = total_amount - principal;

    // print final calculations for compound interest and total amount 
	std::cout << "Compound Interest: " << compound_interest << '\n';
	std::cout << "Total Amount: " << total_amount << '\n';

	return 0;
}