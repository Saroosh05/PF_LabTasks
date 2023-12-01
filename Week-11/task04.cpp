#include <iostream>
using namespace std;

int sum(int matrix[][3], int rowSize);

main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;

    cout << "Enter the elements of the matrix: " << endl;
    int matrix[100][3];

    for (int row = 0; row < rowSize; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    int totalSum = sum(matrix, rowSize);
    cout << "The sum of elements in the matrix is: " << totalSum;
}

int sum(int matrix[][3], int rowSize)
{
    int sum = 0;
    for(int row = 0; row < rowSize; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            sum += matrix[row][col];
        }
    }

    return sum;
}