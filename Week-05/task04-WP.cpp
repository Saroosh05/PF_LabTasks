#include <iostream>
using namespace std;

int multiply(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;

    int result = multiply(number);
    cout << "After multiplying by 5, the result is " << result << ".";
}

int multiply(int number)
{
    int ans = number*5;
    return ans;
}

