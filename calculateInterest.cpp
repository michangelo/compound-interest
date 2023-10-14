#include "io.h"
#include <cmath>

double calculateInterest(double principal, double rate, double timespan)
{
	return principal * pow((1 + rate / 100.00), timespan);
}