#include <iostream>
#include <string>
using namespace std;

void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);

main()
{
    int n = 0;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> n;
    int array1[n];

    if (n > 0)
    {
        cout << "Enter " << n << " elements for the first array, one per line: " << endl;
        for (int x = 0; x < n; x++)
        {
            cin >> array1[x];
        }
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }

    int m = 0;
    cout << "Enter the number of elements for the second array: ";
    cin >> m;
    int array2[m];

    if (m > 0)
    {
        cout << "Enter " << m << " elements for the second array, one per line: " << endl;
        for (int x = 0; x < m; x++)
        {
            cin >> array2[x];
        }
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
    insertArrayInMiddle(array1, n, array2, m);
}

void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
    cout << "Resulting array: [";
    int newArray[firstArraySize + secondArraySize];
    newArray[0] = firstArray[0];
    cout << newArray[0];
    for (int x = 1; x < firstArraySize / 2; x++)
    {
        newArray[x] = firstArray[x];
        cout << ", " << newArray[x];
    }
    int x = (firstArraySize / 2) + 1;
    for (int y = 0; y < secondArraySize; y++)
    {
        newArray[x] = secondArray[y];
        cout << ", " << newArray[x];
        x++;
    }
    int z = (firstArraySize / 2);
    while (x <= firstArraySize + secondArraySize)
    {
        newArray[x] = firstArray[z];
        cout << ", " << newArray[x];
        x++;
        z++;
    }
    cout << "]";
}