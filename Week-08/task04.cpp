#include<iostream>
using namespace std;

int primeNumbers(int);

main(){
    int num;
    cout << "Enter the integer: ";
    cin >> num;

    int result = primeNumbers(num);
    cout << result;
}

int primeNumbers(int num)
{
    int count = 0;
    for(int number = 1; number <= num; number++){
        int divisibles = 0;
        for(int value=1; value<=number; value++){
            if(number%value == 0){
                divisibles ++;
            }
        }
        if(divisibles == 2){
            count ++;
        }
    }
    return count;
}
