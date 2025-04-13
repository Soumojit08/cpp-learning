#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit, reverse = 0;
    cout << "Enter number : ";
    cin >> n;
    while (n != 0)
    {
        lastDigit = n % 10; /*n=1234 r=4321*/
        reverse = reverse * 10;
        reverse = reverse + lastDigit;
        n = n / 10;
    }

    cout << "The reverse number is : " << reverse;

    return 0;
}
