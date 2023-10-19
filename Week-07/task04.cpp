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
 
    int j = 1, frequency = 0;
    int d1 = number/pow(10,(x-1));
    
    while(j < x){
        float power = pow(10,(x-j));
        int p = power;
        int digits = number/p;
        int l = number % p;
        j++;
        digits = l/pow(10,(x-j));
        number = l;
        if(digits == digit){
            frequency ++;
        }
    }
    
    if(d1 == digit){
        frequency++;
    }

    return frequency;
}