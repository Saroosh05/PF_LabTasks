#include <iostream>
using namespace std;

main()
{
    int numbers[5];

    for (int index = 0; index < 5; index++)
    {
        cout << "Enter number " << index + 1 << ": ";
        cin >> numbers[index];
    }

    cout << "The first element in array is: " << numbers[0] << endl;
    cout << "The last element in array is: " << numbers[4] << endl;
}