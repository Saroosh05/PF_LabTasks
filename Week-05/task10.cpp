#include <iostream>
using namespace std;

string tens(int number);
string numToTextP1(int digit1);
string numToTextP2(int digit2);

main()
{
    int number;
    cout << "Enter a number (1-99): " ;
    cin >> number;

    int digit1 = number/10;
    int digit2 = number%10;
    
    if(digit1 == 1){
        string textForm = tens(number);
        cout << textForm;
    }
    if(digit1 != 1){
        string textForm = numToTextP1( digit1) + numToTextP2( digit2);
        cout << textForm;
    }
}

string tens(int number)
{
    string result;

    if(number == 11){
        result = "Eleven";
    }
    if(number == 12){
        result = "Twelve";
    }
    if(number == 13){
        result = "Thirteen";
    }
    if(number == 14){
        result = "Forteen";
    }
    if(number == 15){
        result = "Fifteen";
    }
    if(number == 16){
        result = "Sixteen";
    }
    if(number == 17){
       result = "Seventeen";
    }
    if(number == 18){
        result = "Eighteen";
    }
    if(number == 19){
        result = "Nineteen";
    }
    return result;
}

string numToTextP1(int digit1)
{

    string string1;

    if(digit1 == 2){
        string1 = "Twenty";
    }
    if(digit1 == 3){
        string1 = "Thirty";
    }
    if(digit1 == 4){
        string1 = "Forty";
    }
    if(digit1 == 5){
        string1 = "Fifty";
    }
    if(digit1 == 6){
        string1 = "Sixty";
    }
    if(digit1 == 7){
        string1 = "Seventy";
    }
    if(digit1 == 8){
        string1 = "Eighty";
    }
    if(digit1 == 9){
        string1 = "Ninety";
    }
    return string1;
}

string numToTextP2(int digit2)
{
    string string2;
    if(digit2 == 1){
        string2 = "One";
    }
    if(digit2 == 2){
        string2 = "Two";
    }
    if(digit2 == 3){
        string2 = "Three";
    }
    if(digit2 == 4){
        string2 = "Four";
    }
    if(digit2 == 5){
        string2 = "Five";
    }
    if(digit2 == 6){
        string2 = "Six";
    }
    if(digit2 == 7){
        string2 = "Seven";
    }
    if(digit2 == 8){
        string2 = "Eight";
    }
    if(digit2 == 9){
        string2 = "Nine";
    }
    return string2;
}

