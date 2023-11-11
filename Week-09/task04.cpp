#include <iostream>
#include <string>
using namespace std;

string reverse(int number[], int n);

main()
{
    int n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

        if (n > 0)
    {
        int number[n];
        cout << "Enter " << n << " numbers, one per line: " << endl;
        for (int x = 0; x < n; x++)
        {
            cin >> number[x];
        }

        string result = reverse(number, n);
        cout << result;
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

string reverse(int number[], int n)
{
    string reversed;

    reversed = "Numbers in reverse order: ";
    for (int x = n - 1; x >= 0; x--)
    {
        reversed += to_string(number[x]) + " ";
    }
    return reversed;
}