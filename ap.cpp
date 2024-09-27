// Calculate Arithmetic Progression of any terms
#include <iostream>
using namespace std;

int main()
{
    int n, d, i;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "Enter the difference : ";
    cin >> d;
    cout << "Enter the first term : ";
    cin >> i;

    int lastTerms = 1 + (n - 1) * d;
    for (i; i <= lastTerms; i = i + d)
    {
        cout << i << endl;
    }

    return 0;
}