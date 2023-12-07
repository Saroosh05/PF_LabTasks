#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayWords(string fileName);

main()
{
    displayWords("Task7.txt");
}

void displayWords(string fileName)
{
    int count = 0;
    string line;
    string path = fileName;
    fstream file;
    file.open(path, ios::in);

    while (!file.eof())
    {
        getline(file, line);

        string word = "";
        int x = 0;
        while (x < line.length())
        {
            if (line[x] != ' ')
            {
                word += line[x];
            }
            else
            {
                int wordLength = word.length();
                if (wordLength < 4)
                {
                    cout << word << " ";
                }
                word = "";
            }

            x++;
        }

        int wordLength = word.length();
        if (wordLength < 4)
        {
            cout << word << " ";
        }
    }
    file.close();
}