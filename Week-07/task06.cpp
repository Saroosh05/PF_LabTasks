#include<iostream>
#include<cmath>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    
    int gcd = calculateGCD(number1, number2);
    cout << "GCD: " << gcd << endl;

    int lcm = calculateLCM(number1, number2, gcd);
    cout << "LCM: " << lcm;

}

int calculateGCD(int number1, int number2)
{  
    while(number1 != number2){
        if(number1 > number2){
            number1 = number1 - number2;
        }
        else {
            number2 = number2 - number1;
        }
    }
    return number1;
}

int calculateLCM(int number1, int number2, int gcd)
{
    int output = (number1*number2)/gcd;
    return output;
}