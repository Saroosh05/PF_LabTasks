#include<iostream>
using namespace std;

string howBad(int);

main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    string result = howBad(num);
    cout << result;
}

string howBad(int num)
{   
    int binary, remain = 0, remainder, sum = 0, divisibles = 0;
    string descriptors;
    while(num >= 1){
        remain = num/2;
        remainder = num - (2*(num/2)); 
        num = remain;
        sum += remainder;
    }

    for(int value=1; value <= sum; value++){
            if(sum%value == 0){
                divisibles ++;
            }
        }
    
    if(sum % 2 == 0){
        descriptors = "Evil";
    }
    else {
        descriptors +=  "Odious";
    }
    if(divisibles == 2){
        descriptors += ", Pernicious";
    }
    return descriptors;
}
