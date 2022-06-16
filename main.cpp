#include "deposite.h"
int main()
{
	int a;
	double b;
	cout << "please enter months and sum of deposites" << endl;
	cin >> a >> b;
	Deposite d(a, b);
	cout<<d.procent();
	

}