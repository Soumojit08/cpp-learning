#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout << "Enter n : ";
    cin>> n;

    int i=2;
    while (i<=n)        
    {
        sum = sum + i;
        i=i+2;
    }
    cout << "Sum of first " << n << " natural numbers is " << sum;
    
    return 0;
}