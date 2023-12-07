#include<iostream>
#include<fstream>
using namespace std;

main()
{
    int integer;
    float decimal;
    char character;
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "Enter a decimal: ";
    cin >> decimal;
    cout << "Enter a character: ";
    cin >> character;

    string path1 = "integer.txt";
    string path2 = "decimal.txt";
    string path3 = "character.txt";

    fstream file1;
    fstream file2;
    fstream file3;

    file1.open(path1, ios::out);
    file2.open(path2, ios::out);
    file3.open(path3, ios::out);

    file1 << integer << "\t";
    file2 << decimal << "\t";
    file3 << character;

    file1.close();
    file2.close();
    file3.close();
}