#include<iostream>
using namespace std;
int main(){
	int n;
	int a=0,b=1,c;
	cout<<"Enter a number: ";
	cin>>n;
    //cout<<a<<" "<<b;
	while(a<=n){
	
			cout<<" "<<a;
			c=a+b;
			a=b;
			b=c;
		
	}
	return 0;
}
