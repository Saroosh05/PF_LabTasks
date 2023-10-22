#include<iostream>
using namespace std;

int sum();

main()
{
    int result = sum();
    cout << result;
}

int sum()
{
    int sum = 0;
    for(int x = 1; x <= 5 ; x++){
       sum += x;
    }
    return sum;
}