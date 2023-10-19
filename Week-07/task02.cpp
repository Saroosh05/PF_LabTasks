#include<iostream>
using namespace std;

void generateFibonacci(int length);

main()
{
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    
    generateFibonacci(length);
}

void generateFibonacci(int length)
{
    int n1 = 0, n2 = 1;
    int series = 0;
    for(int x = 1; x <= length; x++){ 
        cout << n1 ;
        if(x < length){
            cout << ", ";
        }
        series = n1 + n2;      
        n1 = n2;
        n2 = series;
    }
}