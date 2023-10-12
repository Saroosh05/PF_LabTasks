#include<iostream>
using namespace std;

float findGreatest(float num1, float num2, float num3 );

main()
{   
    float num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    float result =findGreatest(num1, num2, num3 );
    cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << result;
}

float findGreatest(float num1, float num2, float num3 )
{
    float greatest;
    if (num1 >  num2){
        if(num1 > num3){
            greatest = num1;
        }
        else {
            greatest = num3;
        }
    }
    else {
        if(num2 > num3){
            greatest = num2;
        }
        else {
            greatest = num3;
        }
    }
    return greatest;
}