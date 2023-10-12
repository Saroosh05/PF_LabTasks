#include<iostream>
using namespace std;

bool greatest(int num1, int num2);

main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    bool result = greatest(num1, num2);
    cout << result;
}

bool greatest(int num1, int num2)
{
    if(num1 > num2){
        return true;
    } 
    else
    {
        return false;
    }
}