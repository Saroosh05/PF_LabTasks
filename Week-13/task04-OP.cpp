#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
    int integer;
    float decimal;
    char character;

    string path1 = "integer.txt";
    string path2 = "decimal.txt";
    string path3 = "character.txt";

    fstream file1;
    fstream file2;
    fstream file3;

    file1.open(path1, ios::in);
    file2.open(path2, ios::in);
    file3.open(path3, ios::in);

    file1 >>  integer;
    file2 >> decimal;
    file3 >> character;

    file1.close();
    file2.close();
    file3.close();

    cout << "Integer: " << integer << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Character: " << character;
}