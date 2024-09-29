// Calculate Arithmetic Progression of any terms
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int d = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << d << " ";
        d = d * 4;
    }
    return 0;
}
