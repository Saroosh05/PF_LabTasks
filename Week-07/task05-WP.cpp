#include<iostream>
using namespace std;

int sum();

main()
{
    int result = sum();
    cout << "Sum: " << result;
}

int sum()
{
    int sum = 0;
    for(int x = 1; x <= 100 ; x++){
       sum += x;
    }
    return sum;
}