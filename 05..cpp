#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "the largest number is " << num1;
    }
    else
    {
        cout << "the largest number is " << num2;
    }

    return 0;
}