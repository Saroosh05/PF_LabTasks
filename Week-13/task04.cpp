#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName);

main()
{
    string names[100];
    int ages[100], size = 100, count = 0;
    float matricMarks[100], fscMarks[100], ecatMarks[100];

    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, "student.txt");
}

void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    string yesOrNo;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter student's name: ";
        cin.clear();
        cin.sync();
        getline(cin, names[x]);
        cout << "Enter student's age: ";
        cin >> ages[x];
        cout << "Enter student's Matric marks: ";
        cin >> matricMarks[x];
        cout << "Enter student's FSC marks: ";
        cin >> fscMarks[x];
        cout << "Enter student's ECAT marks: ";
        cin >> ecatMarks[x];
        cout << "Enter No to Stop or Yes to Continue Enter: ";
        cin >> yesOrNo;

        count++;

        if (yesOrNo == "No" || yesOrNo == "no")
        {
            break;
        }
    }
}

void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName)
{
    string path = fileName;
    fstream file;
    file.open(path, ios::out);

    for (int x = 0; x < count; x++)
    {
        file << "Name: " << names[x] << endl;
        file << "Age: " << ages[x] << endl;
        file << "Matric Marks: " << matricMarks[x] << endl;
        file << "Fsc Marks: " << fscMarks[x] << endl;
        file << "Ecat Marks: " << ecatMarks[x] << endl;
        file << endl;
    }

    file.close();
}