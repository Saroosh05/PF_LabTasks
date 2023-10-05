#include <iostream>
using namespace std;

string OddishOrEvenish(int number);

main()
{
    int number;
    cout << "Enter a five-digit number: ";
    cin >> number;
    
    string result = OddishOrEvenish( number);
    cout << result;

}

string OddishOrEvenish(int number)
{
    string O_E;
    int digit1 = number/10000;
    int digit2 = (number%10000)/1000;
    int digit3 = ((number%10000)%1000)/100;
    int digit4 = (((number%10000)%1000)%100)/10;
    int digit5 = (((number%10000)%1000)%100)%10;

    if(((digit1 + digit2 + digit3 + digit4 + digit5)%2) != 0){
        O_E = "Oddish";
    }
    if(((digit1 + digit2 + digit3 + digit4 + digit5)%2) == 0){
         O_E =  "Evenish";
    }
    return O_E;
}

