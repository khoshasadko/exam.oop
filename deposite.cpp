#include "deposite.h"

double Deposite::GetMonth()
{
	return month;
}

double Deposite::GetSum()
{
	return sum;
}

long Deposite::procent()
{
	long x;
	x = ((this->sum) * (0.05 / 100) / (365 * 30));
	return(x* this->month);
}


