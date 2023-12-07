#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
    string name;
    string path = "name.txt";
    fstream file;
    file.open(path, ios::in);
    getline(file, name);
    file.close();
    cout << "The name in the file is: " << name;
}