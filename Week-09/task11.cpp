#include <iostream>
#include <string>
using namespace std;

string vowelsRemoved(string);

main()
{
  string inputString;
  cout << "Enter a string: ";
  getline(cin, inputString);

  string result = vowelsRemoved(inputString);
  cout << "String with vowels removed: " << result;
}

string vowelsRemoved(string inputString)
{
  string newString = inputString;
  string vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  for (int v = 0; vowels[v] != '\0'; v++)
  {
    for (int x = 0; newString[x] != '\0'; x++)
    {
      if (newString[x] == vowels[v])
      {
        for (int y = x; newString[y] != '\0'; y++)
        {
          newString[y] = newString[y + 1];
        }
        x--;
      }
    }
  }

  for (int x = 0; newString[x] != '\0'; x++)
  {
    if (newString[x] == ' ' && newString[x + 1] == ' ')
    {
      for (int y = x; newString[y] != '\0'; y++)
      {
        newString[y] = newString[y + 1];
      }
      x--;
    }
  }

  return newString;
}