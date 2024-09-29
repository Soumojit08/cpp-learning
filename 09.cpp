// Game of predict the output

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0)); // To get different number each time
    int randomNum = rand() % 10;
    int guess;
    while (1)
    {
        cout << "Enter guess : ";
        cin >> guess;
        if (guess == randomNum)
        {
            cout << "congrats ! U guess it right";
            break;
        }
        else if (randomNum > guess)
        {
            cout << "U r nearby try a little higher" << endl;
        }
        else if (randomNum < guess)
        {
            cout << "U r nearby try a little lower" << endl;
        }
    }

    return 0;
}