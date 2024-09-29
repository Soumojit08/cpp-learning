#include <iostream>
using namespace std;

void printName(string nam)
{
    cout << "Hey I'm " << nam;
}

int main()
{
    string name;
    cin >> name;
    printName(name);
    return 0;
}