#include <iostream>
#include <string>
using namespace std;

int findLargestNumber(int arr[], int size);

main()
{
    int n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int largest;
    if (n > 0)
    {
        int number[n];
        cout << "Enter " << n << " numbers, one per line: " << endl;
        for (int x = 0; x < n; x++)
        {
            cin >> number[x];
        }
        largest = findLargestNumber(number, n);
        cout << "The largest number entered is: " << largest;
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

int findLargestNumber(int arr[], int size)
{
    int previous = 0;
    for (int x = 0; x < size; x++)
    {
        if (arr[x] > previous)
        {
            previous = arr[x];
        }
        else
        {
            previous = previous;
        }
    }
    return previous;
}