#include <iostream>
#include<string>
using namespace std;

string fire(string arr[5][5], string coordinates);

main()
{
    string coordinates;
    string arr[5][5] = {
        {".", ".", ".", "*", "*"},

        {".", "*", ".", ".", "."},

        {".", "*", ".", ".", "."},

        {".", "*", ".", ".", "."},

        {".", ".", "*", "*", "."},
    };
    
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coordinates;

    string splashOrBoom = fire(arr, coordinates);
    if (splashOrBoom == ".")
    {
        cout << "Result: splash";
    }
    else
    {
        cout << "Result: BOOM";
    }
}

string fire(string arr[5][5], string coordinates)
{
    int row;
    if(coordinates[0] == 'A')
    {
        row = 0;
    }
    else if(coordinates[0] == 'B')
    {
        row = 1;
    } else if(coordinates[0] == 'C')
    {
        row = 2;
    } else if(coordinates[0] == 'D')
    {
        row = 3;
    }else 
    {
        row = 4;
    }

    int col;
    if(coordinates[1] == '1')
    {
        col = 0;
    }
    else if(coordinates[1] == '2')
    {
        col = 1;
    } else if(coordinates[1] == '3')
    {
        col = 2;
    } else if(coordinates[1] == '4')
    {
        col = 3;
    }else 
    {
        col = 4;
    }

    string requiredChar = arr[row][col];
    return requiredChar;
}