#include <iostream>
using namespace std;

void printMatrix(int matrix[][5], int rowSize);
void largestToFirst(int matrix[][5], int rowSize);

main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;

    cout << "Enter the elements of the matrix: " << endl;
    int matrix[100][5];

    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    cout << endl;
    cout << "Original Matrix: " << endl;
    printMatrix(matrix, rowSize);

    largestToFirst(matrix, rowSize);
    
    cout << endl;
    cout << "Matrix after largest column moved to first: " << endl;
    printMatrix(matrix, rowSize);
}

void printMatrix(int matrix[][5], int rowSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << matrix[row][col] << " ";
        }

        cout << endl;
    }
}

void largestToFirst(int matrix[][5], int rowSize)
{
    int colSum[5];
    int largest = 0;
    int swap;

    int column = 0;
    while (column < 5)
    {
        colSum[column] = 0;
        for (int row = 0; row < rowSize; row++)
        {
            colSum[column] += matrix[row][column];
        }
        column++;
    }

    for (int col = 0; col < 5; col++)
    {
        int check = 0;
        for (int max = 0; max < 5; max++)
        {
            if (colSum[col] < colSum[max])
            {
                check++;
            }
        }

        if (check == 0)
        {
            for (int x = 0; x < 5; x++)
            {

                swap = matrix[x][0];
                matrix[x][0] = matrix[x][col];
                matrix[x][col] = swap;
            }
            break;
        }
    }
}