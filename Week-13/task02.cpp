#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countCharacters(string fileName);

main()
{
    int count = countCharacters("Task2.txt");
    cout << "Total number of Characters: " << count;
}

int countCharacters(string fileName)
{
    int count = 0;
    int lineLength;
    string characters;
    string path = fileName;
    fstream file;
    file.open(path, ios::in);

    while (!file.eof())
    {
        getline(file, characters);
        lineLength = characters.length();
        count += lineLength;
    }
    file.close();

    return count;
}