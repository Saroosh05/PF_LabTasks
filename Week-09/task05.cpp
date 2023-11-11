#include <iostream>
#include <string>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number);

main()
{
    int n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    bool existance;
    string unique = "";
    if (n > 0)
    {
        int number[n];
        cout << "Enter " << n << " numbers, one per line: " << endl;
        for (int x = 0; x < n; x++)
        {
            cin >> number[x];
            existance = isAlreadyEntered(number, x, number[x]);
            if (existance == true)
            {
                cout << "Already Entered: " << number[x] << endl;
            }
            if (existance == false)
            {
                unique += to_string(number[x]) + " ";
            }
        }
        cout << "Unique numbers entered: " << unique;
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

bool isAlreadyEntered(int arr[], int size, int number)
{
    int y = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            y++;
        }
    }

    if (y > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}