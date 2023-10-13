#include<iostream>
using namespace std;

char assignGrade(int marks);

main()
{   
    int marks;

    cout << "Enter the marks: ";
    cin >> marks;

    char result = assignGrade( marks);
    cout << "Grade: " << result;

}

char assignGrade(int marks)
{
    char grade;
    if(marks < 50){
        grade = 'F';
    }
    if(marks <= 50 && marks <= 60){
        grade = 'E';
    }
    if(marks <= 61 && marks <= 70){
        grade = 'D';
    }
    if(marks <= 71 && marks <= 80){
        grade = 'C';
    }
    if(marks <= 81 && marks <= 85){
        grade = 'B';
    }
    if(marks > 85){
        grade = 'A';
    }
    return grade;
}