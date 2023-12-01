#include <iostream>
using namespace std;

void displayWorld(char matrix[][5], int rowSize);
void setGravityStatus(bool status, bool gravity);
void timeTick(char matrix[][5], int num);

main()
{
    int rowSize = 5;
    int colSize = 5;
    char objects[5][5] = {
        {'-', '#', '#', '-', '#'},
        {'#', '-', '-', '#', '-'},
        {'-', '#', '-', '-', '-'},
        {'#', '-', '#', '-', '#'},
        {'#', '-', '-', '-', '-'}};

    bool gravity = false;

    cout << "World: " << endl;
    displayWorld(objects, rowSize);
    setGravityStatus(true, gravity);
    timeTick(objects, 1);
    cout << endl;

    cout << "World After Tick: " << endl;
    displayWorld(objects, rowSize);
}

void displayWorld(char matrix[][5], int rowSize)
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

void setGravityStatus(bool status, bool gravity)
{
    gravity = status;
}

void timeTick(char matrix[][5], int num)
{
    for (int count = 0; count < num; count++)
    {
        for (int row = 4; row > 0; row--)
        {
            for (int col = 0; col < 5; col++)
            {
                if (matrix[row][col] == '-' && matrix[row - 1][col] == '#')
                {
                    matrix[row][col] = '#';
                    matrix[row - 1][col] = '-';
                }
            }
        }
    }
}