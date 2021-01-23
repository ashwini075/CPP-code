#include<iostream>
using namespace std;

int main()
{
	int no,rev=0,r,a;
	cout<<"Enter the no: ";
	cin>>no;
	a=no;
	while(no>0)
		{
		 r=no%10;
		 rev=rev*10+r;
		 no=no/10;
		}
	cout<<"Reverse of "<<a<<" is: "<<rev;
return 0;
}
