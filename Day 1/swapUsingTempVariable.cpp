#include<iostream>
using namespace std;
int main(){
	int n1=4,n2=5,temp=0;
	cout<<"before swap : ";
	cout<<n1<<" "<<n2<<endl;;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"after swap : ";
	cout<<n1<<" "<<n2;
	return 0;
}
