#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main()
{
    string line;
    string path = "lines.txt";
    fstream file;
    file.open(path, ios::in);
    
    while (!file.eof())
    {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
}