#include<iostream>
using namespace std;

float income(string screening, int rows, int columns);

main()
{   
    string screening;
    int rows, columns;

    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;


    float result = income(screening, rows, columns);
    cout << result;
}

float income(string screening, int rows, int columns)
{
    float total;
    if (screening == "Premiere"){
        total = 12*rows*columns;
    }
    if (screening == "Normal"){
        total = 7.50*rows*columns;
    }
    if (screening == "Discount"){
        total = 5.00*rows*columns;
    }
    return total;
}