#include<iostream>
using namespace std;

float discount(float amount, string month, string day);

main()
{   
    float amount; 
    string month, day;

    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;

    float result = discount(amount, month, day );
    cout << "Payable Amount after discount: " << result;
}

float discount(float amount, string month, string day )
{
    float payable = amount;
    if(day == "Sunday"){
        if(month == "October"){
            payable = amount - (0.1*amount);
        } 
        else {
            payable = amount - (0.05*amount);
        }
    }
    return payable;
}