#include<iostream>
#include<cmath>
using namespace std;

int digitSum(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int result = digitSum( number);
    cout << "Sum of digits: " << result;

}

int digitSum(int number)
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
 
    int j = 1;
    int d1 = number/pow(10,(x-1));
    
    while(j < x){
        float power = pow(10,(x-j));
        int p = power;
        int digits = number/p;
        int l = number % p;
        j++;
        digits = l/pow(10,(x-j));
        number = l;
        d1 = d1 + digits;
    }

    return d1;
}