#include <iostream>
#include <string>
using namespace std;

string shift(string word, char small[], char big[]);

main()
{
    char small[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char big[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string word;
    cout << "Enter a string: ";
    getline(cin, word);

    string result = shift(word, small, big);
    cout << result;
}

string shift(string word, char small[], char big[])
{
    int y = word.length();
    int index;
    string shifted = "Shifted String: ";
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (word[i] != 'z' && word[i] != 'Z' && word[i] != ' ')
            {
                if (word[i] == small[j])
                {
                    shifted += small[j + 1];
                    break;
                }
                else if (word[i] == big[j])
                {
                    shifted += big[j + 1];
                    break;
                }
            }
            else if (word[i] != ' ')
            {
                if (word[i] == 'z')
                {
                    shifted += 'a';
                    break;
                }
                else if (word[i] == 'Z')
                {
                    shifted += 'A';
                    break;
                }
            }
            else
            {
                shifted += ' ';
                break;
            }
        }
    }
    return shifted;
}