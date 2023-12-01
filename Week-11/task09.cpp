#include <iostream>
using namespace std;

int countIdenticalArrays(int arr[][3], int rowSize);

main()
{
    int rowSize;
    cout << "Enter the number of rows for the array: ";
    cin >> rowSize;

    cout << "Enter the elements of the array: " << endl;
    int arr[100][3];

    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> arr[row][col];
        }
    }

    int result = countIdenticalArrays(arr, rowSize);
    cout << "The count of identical rows in the array is: " << result;
}

int countIdenticalArrays(int arr[][3], int rowSize)
{

    int row = 0;
    int count = 0;
    while (row < rowSize)
    {
        for (int x = 0; x < rowSize; x++)
        {
            if (row == x)
            {
                continue;
            }

            int check = 0;

            for (int col = 0; col < 3; col++)
            {
                if (arr[row][col] == arr[x][col])
                {
                    check++;
                }
            }
            
            if (check == 3)
            {
                count++;
            }
        }
        row++;
    }

    return count;
}
