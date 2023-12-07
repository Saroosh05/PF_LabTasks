#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countLines(string fileName);

main()
{
    int count = countLines("Task6.txt");
    cout << "Total number of lines: " << count;
}

int countLines(string fileName)
{
    int count = 0;
    string firstLine, line;
    string path = fileName;
    fstream file;
    file.open(path, ios::in);

    getline(file, firstLine);
    char requiredChar = tolower(firstLine[0]);

    while (!file.eof())
    {
        getline(file, line);
        char comparingChar = tolower(line[0]);
        if (comparingChar != requiredChar)
        {
            count++;
        }
    }
    file.close();

    return count;
}