#include<iostream>
#include<cmath>
using namespace std;

int frequencyChecker(int number, int digit);

main()
{
    int number,digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    
    int result = frequencyChecker( number, digit);
    cout << "Frequency: " << result;

}

int frequencyChecker(int number, int digit)
{   
    int d,x, i = 1;

    if(number == 0){
        x = 1;
    }
    else {
        x = 0;
    }

    while(number/i != 0){
        d = number/i;
        i = i*10;
        x++;
    }
 
    float power;
    int j = 1, frequency = 0, digits, p;

    while(j <= x){
        power = pow(10,(x-j));
        p = power;
        digits = number/p;
        number = number % p;

        if(digits == digit){
            frequency ++;
        }
        j++;
    }

    return frequency;
}