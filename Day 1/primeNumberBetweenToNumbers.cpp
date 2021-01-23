#include <iostream>
using namespace std;

int main() {
    int low, high, i;
    bool isPrime = true;

    cout << "Enter start and end: "<<endl;
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: " << endl;

    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            cout << low << " ";

        ++low;
    }

    return 0;
}