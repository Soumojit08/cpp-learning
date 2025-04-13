#include <iostream>
using namespace std;

void reset();
void addition();
void subtraction();
void multiplication();
void divide();
float result;
int temp = 0;

int main()
{
    int choice;
    cout << "Starting Calculator....." << endl;

    while (1)
    {
        cout << "Enter 0 for reset" << endl
             << "Enter 1 for add" << endl
             << "Enter 2 for minus" << endl
             << "Enter 3 for multiplication" << endl
             << "Enter 4 for division" << endl
             << "Enter 5 to exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            reset();
            break;
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            divide();
            break;
        case 5:
            cout << "Exited...";
            exit(1);
            break;

        default:
            cout << "Invalid choice";
        }
    }

    return 0;
}

void addition()
{
    float z, num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    if (temp == 0)
    {

        result = num1 + num2;
        cout << "The result is : " << result << endl;
        temp++;
    }
    else
    {
        cout << "Enter number again : ";
        cin >> z;
        result += z;
        cout << "The result is : " << result << endl;
    }
}

void subtraction()
{
    float z, num1, num2;
    if (temp == 0)
    {
        cout << "Enter first number : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        result = num1 - num2;
        cout << "The result is : " << result << endl;
        temp++;
    }
    else
    {
        cout << "Enter number again : ";
        cin >> z;
        result -= z;
        cout << "The result is : " << result << endl;
    }
}

void multiplication()
{
    float z, num1, num2;
    if (temp == 0)
    {
        cout << "Enter first number : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        result = num1 * num2;
        cout << "The result is : " << result << endl;
        temp++;
    }
    else
    {
        cout << "Enter number again : ";
        cin >> z;
        result *= z;
        cout << "The result is : " << result << endl;
    }
}

void divide()
{
    float z, num1, num2;
    if (temp == 0)
    {
        cout << "Enter first number : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        result = num1 / num2;
        cout << "The result is : " << result << endl;
        temp++;
    }
    else
    {
        cout << "Enter number again : ";
        cin >> z;
        result /= z;
        cout << "The result is : " << result << endl;
    }
}

void reset()
{
    if (temp != 0)
    {
        temp = 0;
        cout << "Done Reseting...." << endl;
    }
}