#include<iostream>
using namespace std;

string personal(float age, char gender);

main()
{   
    float age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;

    string result = personal(age, gender);
    cout << "Your personal title is: " << result;
}

string personal(float age, char gender)
{
    string title;
    if(gender == 'm'){
        if(age >= 16){
            title = "Mr.";
        } 
        else {
            title = "Master";
        }
    }
    else 
    {
        if(age >= 16){
            title = "Ms.";
        } 
        else {
            title = "Miss";
        }
    }
    return title;
}