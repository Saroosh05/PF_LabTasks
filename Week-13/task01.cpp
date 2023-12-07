#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countLines(string fileName);

main()
{
    int count = countLines("Task1.txt");
    cout << "Total number of lines: " << count;
}

int countLines(string fileName)
{
    int count = 0;
    string line;
    string path = fileName;
    fstream file;
    file.open(path, ios::in);

    while (!file.eof())
    {
        getline(file, line);
        count++;
    }
    file.close();

    return count;
}