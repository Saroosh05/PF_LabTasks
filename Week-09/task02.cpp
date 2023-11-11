#include <iostream>
using namespace std;

string reverse(string word);

main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;

    string result = reverse(word);
    cout << result;
}

string reverse(string word)
{
    int y = 0;
    for (int x = 0; word[x] != '\0'; x++)
    {
        y++;
    }

    string reversed = "Reversed String: ";
    for (int z = y - 1; z >= 0; z--)
    {
        reversed += word[z];
    }
    return reversed;
}