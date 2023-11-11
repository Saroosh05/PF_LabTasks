#include <iostream>
using namespace std;

main()
{
    char word[200];
    cout << "Enter a word: ";
    cin >> word;

    for (int x = 0; word[x] != '\0'; x++)
    {
        cout << word[x] << " found at position " << x << endl;
    }
}