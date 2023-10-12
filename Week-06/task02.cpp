#include<iostream>
using namespace std;

bool parity(int number);

main()
{
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    bool result = parity(number);
    cout << result;
}

bool parity(int number)
{
    int digit1 = number/100;
    int digit2 = (number%100)/10;
    int digit3 = (number%100)%10;
    int sum = digit1 + digit2 + digit3;

    if((((sum%2) != 0) && ((number%2) != 0))|| (((sum%2) == 0) && ((number%2) == 0))){
        return true ;
    } 
    else {
        return false;
    }
}