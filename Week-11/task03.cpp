#include <iostream>
using namespace std;

void print(int matrix[][5], int rowSize);
int converter(int matrix[][5], int rowSize, string color);
int countCars(int matrix[][5], int rowSize, string type);
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

    cout << "Toyata Blue cars available in the company are: ";
    print(carData, rowSize);
    cout << endl;

    int RedCars = converter(carData, rowSize, "Red");
    cout << "Total number Red cars in the company: " << RedCars << endl;

    int NissanCars = countCars(carData, rowSize, "Nissan");
    cout << "Total number Nissan cars in the company: " << NissanCars << endl;

    cout << "Matrix after the converion of rows into columns and vice versa: " << endl;
    printMatrix(carData, rowSize);
}

void print(int matrix[][5], int rowSize)
{
    string car, color;
    for (int row = 0; row < rowSize; row++)
    {
        if (row == 0)
        {
            car = "Suzuki";
        }
        else if (row == 1)
        {
            car = "Toyota";
        }
        else if (row == 2)
        {
            car = "Nissan";
        }
        else if (row == 3)
        {
            car = "BMW";
        }
        else if (row == 4)
        {
            car = "Audi";
        }

        for (int col = 0; col < 5; col++)
        {
            if (col == 0)
            {
                color = "Red";
            }
            else if (col == 1)
            {
                color = "Black";
            }
            else if (col == 2)
            {
                color = "Brown";
            }
            else if (col == 3)
            {
                color = "Blue";
            }
            else if (col == 4)
            {
                color = "Gray";
            }
            if (car == "Toyota" && color == "Blue")
            {
                cout << matrix[row][col];
            }
        }
    }
}

int converter(int matrix[][5], int rowSize, string color)
{
    string colour;
    int count = 0;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (col == 0)
            {
                colour = "Red";
            }
            else if (col == 1)
            {
                colour = "Black";
            }
            else if (col == 2)
            {
                colour = "Brown";
            }
            else if (col == 3)
            {
                colour = "Blue";
            }
            else if (col == 4)
            {
                colour = "Gray";
            }

            if (colour == color)
            {
                count++;
            }
        }
    }

    return count;
}

int countCars(int matrix[][5], int rowSize, string type)
{
    string car;
    int count = 0;
    for (int row = 0; row < rowSize; row++)
    {
        if (row == 0)
        {
            car = "Suzuki";
        }
        else if (row == 1)
        {
            car = "Toyota";
        }
        else if (row == 2)
        {
            car = "Nissan";
        }
        else if (row == 3)
        {
            car = "BMW";
        }
        else if (row == 4)
        {
            car = "Audi";
        }

        for (int col = 0; col < 5; col++)
        {
            if (car == type)
            {
                count++;
            }
        }
    }

    return count;
}

void printMatrix(int matrix[][5], int rowSize)
{

    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
                cout << matrix[col][row] << "\t";
        }
        cout << endl;
    }
}

