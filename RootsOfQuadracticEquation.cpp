/* FIND THE ROOTS OF QUADRATIC EQUATION
	desciminant =b^2-4ac
	if descriminant>0   rooots are real and different
	if descriminant=0   rooots are real and same
	if descriminant<0   rooots are complex and different
	*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,descriminant,r1,r2,real,imag;
	cout<<"Enter values of a, b and c: \n";
	cin>>a>>b>>c;
	descriminant = b * b - 4 * a * c;
	if(descriminant > 0)
	{
		r1 = (-b+ sqrt(descriminant)) / (2*a);
		r1 = (-b- sqrt(descriminant)) / (2*a);
		cout<<" r1 = "<<r1<<" r2 = "<<r2<<endl;
	}
	
	else if(descriminant == 0)
	{
		r1=r2=-b/(2*a);
		cout<<" r1 = r2 = "<<r1<<endl;
	}
	
	else if(descriminant < 0)
	{
		real = -b / (2*a);
		imag = sqrt(-descriminant) / (2 * a);
		cout<<"r1 = "<<real<<"+"<<imag<<endl<<"r2 = "<<real<<"-"<<imag<<endl;
	}
	return 0;
}
