#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int calculateFrequency(string fileName);

main()
{
    int frequency = calculateFrequency("Task3.txt");
    cout << "Total number of Characters: " << frequency;
}

int calculateFrequency(string fileName)
{
    int count = 0;
    int lineLength;
    string line;
    string path = fileName;
    fstream file;
    file.open(path, ios::in);

    getline(file, line);
    char requiredChar = tolower(line[0]);

    while (!file.eof())
    {
        getline(file, line);
        for (int x = 0; x < line.length(); x++)
        {
            char lowerCase = tolower(line[x]);
            if(lowerCase == requiredChar)
            {
                count++;
            }
        }
    }
    file.close();

    return count;
}