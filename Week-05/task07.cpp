#include <iostream>
using namespace std;

string isSymmetrical(int number);

main()
{
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    
    string result = isSymmetrical(number);
    if(result == "true"){
        cout << "The number is symmetrical.";
    }
    if(result != "true"){
        cout << "The number is not symmetrical.";
    }
    
}

string isSymmetrical(int number)
{
    string TorF;
    int digit1 = number/100;
    int digit2 = (number%100)/10;
    int digit3 = (number%100)%10;
   
    if((digit3*100 + digit2*10 + digit1) == number){
        TorF = "true";
    }
    if((digit3*100 + digit2*10 + digit1)!= number){
        TorF = "false";
    }
    return TorF;
}

