#include <iostream>
using namespace std;

int add(int value1, int value2)
{
    int sum = value1 + value2;
    return sum;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int result = add(num1, num2);
    cout << result;
    return 0;
}