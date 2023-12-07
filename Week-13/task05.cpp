#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);

main()
{
    string names[100], fileName;
    int adNumbers[100], size = 100, count = 0;
    float percentages[100];

    getStudentDetails(names, adNumbers, percentages, size, count, "Task5.txt");
    saveToFile(names, adNumbers, percentages, count, "topperStudents.txt");
}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
    string path = fileName;
    fstream file;
    file.open(path, ios::in);

    string adnum, percent;
    int x = 0;
    while (!file.eof())
    {
        getline(file, names[x]);
        getline(file, adnum);
        adNumbers[x] = stoi(adnum);
        getline(file, percent);
        percentages[x] = stoi(percent);

        count++;
        x++;
    }

    file.close();
}

void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{
    string path = fileName;
    fstream file;
    file.open(path,
              ios::out);

    for (int x = 0; x < count - 1; x++)
    {
        if (percentages[x] > 70)
        {
            file << "Name: " << names[x] << endl;
            file << "Admission Number: " << adNumbers[x] << endl;
            file << "Percentage: " << percentages[x] << endl;
            file << endl;
        }
    }

    file.close();
}