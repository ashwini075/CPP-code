#include<iostream>
#include<math.h>
    using namespace std;
   
    int main()
    {
        int num, digit, sum = 0;
        cout << "Enter a positive  integer: ";
     
        cin >> num;
        int a = num;
        
        do
        {
            digit = num % 10;
            sum = sum + pow(digit,3);
            num = num / 10;
        }while(num != 0);
       
        if(sum == a)    
            cout << a << " is an Armstrong number";
        else
            cout << a << "is not an Armstrong number";
        return 0;
    }
