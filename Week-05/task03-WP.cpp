#include <iostream>
#include <cmath>
using namespace std;


main()
{
    float number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    float result = max(number1, number2);
    cout << "Greater Number: " << result ;
}

