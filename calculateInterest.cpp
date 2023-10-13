#include <cmath>

double calculateInterest(double p, double r, double t)
{
	return p * pow((1 + r / 100.00), t);
}