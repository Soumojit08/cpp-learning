// Number divisible by 5 and 3 only
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "The number " << n << " is  divisible by 5 and 3" << endl;
    }
    else
    {
        cout << "The number " << n << " is not divisible by 5 and 3" << endl;
    }

    return 0;
}