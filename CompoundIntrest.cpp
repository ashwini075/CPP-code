#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int principle,rate,n,duration,CI;          
	double amount=principle * pow(1+(rate/n),(n*duration));
	 amount=5000 * pow(1+(0.10/10),(10*10));
	CI=amount-principle;
	cout<<CI;
	return 0;
}
