 #include <iostream>
using namespace std;
int main(){

   int num;
    cout<<"Enter a number to check: ";
     cin>>num;
     /* Check if the number is positive, negative or zero */
     if (num > 0) {
             cout<<"Entered number is Positive.";
     } else if (num < 0) {
            cout<<"Entered number is negative.";
     } else {
            cout<<"Entered number is 0.";
     }
     return 0;
}
