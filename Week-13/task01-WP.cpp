#include<iostream>
#include<fstream>
using namespace std;

main()
{
    string path = "example.txt";
    fstream file;
    file.open(path, ios::out);
    string text = "This is sample text.";
    file << text;
    file.close();
}