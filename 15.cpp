#include <iostream>
using namespace std;

int main()
{
    int a, b, res;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    while (1)
    {
        int choice;
        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            res = a + b;
            cout << res;
            break;
        case 2:
            res = a - b;
            cout << res;
            break;
        case 3:
            res = a * b;
            cout << res;
            break;
        case 4:
            res = a / b;
            cout << res;
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Invalid choice";
            break;
        }
    }
    return 0;
}