

using namespace std;
#include<iostream>
class Deposite
{
private:
	int month;
	double sum;
public:
	Deposite(int a, double b)
	{
		month = a;
		sum = b;
	}
	double GetMonth();
	double GetSum();
	long procent();




};