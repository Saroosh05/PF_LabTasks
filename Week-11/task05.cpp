#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3]);
bool identity(int matrix[3][3]);

main()
{
    cout << "Enter the elements of the matrix: " << endl;
    int matrix[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    printMatrix(matrix);
    bool checkIdentity = identity(matrix);
    if (checkIdentity == 0)
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is an identity matrix.";
    }
}

void printMatrix(int matrix[3][3])
{
    cout << "The matrix you entered is: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << "\t";
        }

        cout << endl;
    }
}

bool identity(int matrix[3][3])
{
    int check = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col)
            {
                if (matrix[row][col] != 1)
                {
                    check++;
                }
            }
            else
            {
                if (matrix[row][col] != 0)
                {
                    check++;
                }
            }
        }
    }

    if (check == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}