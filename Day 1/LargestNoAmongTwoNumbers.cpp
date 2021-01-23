
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, large;
    cout<<"Enter the Two Numbers: "<<endl;
    cin>>num1>>num2;
    if(num1>num2)
        large = num1;
    else
        large = num2;
    cout<<"Largest = "<<large;
    cout<<endl;
    return 0;
}
