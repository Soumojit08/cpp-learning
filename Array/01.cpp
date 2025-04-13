// Find smallest / largest of array
#include <iostream>
using namespace std;

int main()
{
    // Initialize array and size
    int n;
    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];

    // Getting array value from user
    cout << "Enter the value of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print Array
    cout << "The array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    // Find smallest
    for (int i = 0; i < n; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "\nLargerst : " << largest << endl;
    cout << "\nSmallest : " << smallest << endl;
    return 0;
}