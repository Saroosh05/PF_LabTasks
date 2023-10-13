#include<iostream>
using namespace std;

string passOrFail(int marks);

main()
{   
    int score;

    cout << "Enter your score: ";
    cin >> score;

    string result = passOrFail(score);
    cout << result;

}

string passOrFail(int marks)
{
   string output;
   if(marks > 50 ){
    output = "You are Passed with " + to_string(marks) + " marks";
   } 
    if(marks <= 50 ){
    output = "You are Failed with " + to_string(marks) + " marks";
   } 
   return output;
}