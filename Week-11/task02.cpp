#include <iostream>
using namespace std;

void printMatrix(int matrix[][5], int rowSize);

main()
{
    int rowSize = 5;
    int colSize = 5;
    int carData[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    printMatrix(carData, rowSize);
}

void printMatrix(int matrix[][5], int rowSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << matrix[row][col] << "\t";
        }

        cout << endl;
    }
}
