#include <iostream>
using namespace std;

main()
{
    int n = 0;
    cout << "How many numbers you want to tell ? ";
    cin >> n;

    int number[n];

    for (int x = 0; x < n; x++)
    {
        cout << "Enter number " << x + 1 << " : ";
        cin >> number[x];
    }
    cout << endl;
    for (int y = 0; y < n; y++)
    {
        cout << "Element " << y + 1 << " is: " << number[y] << endl;
    }
}