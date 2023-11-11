#include <iostream>
#include <string>
using namespace std;

bool charCheck(string inputString, char character);

main()
{
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    char character;
    cout << "Enter the specific character you want to find: ";
    cin >> character;

    bool result = charCheck(inputString, character);
    if (result == 1)
    {
        cout << character << " is found in programming.";
    }
    else
    {
        cout << character << " is not found in programming.";
    }
}

bool charCheck(string inputString, char character)
{
    int y = 0;
    for (int x = 0; inputString[x] != '\0'; x++)
    {
        if (inputString[x] == character)
        {
            y++;
        }
    }

    if (y == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}