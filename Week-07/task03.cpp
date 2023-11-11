#include<iostream>
using namespace std;

int totalDigits(int);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int result = totalDigits(number);
    cout << "Total number of digits: " << result;
}

int totalDigits(int number)
{   
    int digits,x, i = 1;

    if(number == 0){
        x = 1;
    }
    else {
        x = 0;
    }

    while(number/i != 0){
        digits = number/i;
        i = i*10;
        x++;
        cout << digits << endl;
    }
    return x;
}