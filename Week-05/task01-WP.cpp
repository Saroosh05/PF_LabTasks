#include <iostream>
using namespace std;

void add(float number1, float number2);

main()
{
    float number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    add(number1,number2);
}

void add(float number1, float number2)
{
    cout << "Sum: " << number1 + number2;
}