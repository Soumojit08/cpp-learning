// Pass by Value
#include <iostream>
using namespace std;

void add(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    add(num);
    cout << num << endl;
    return 0;
}

/*gives copy of value so original does not changes*/
