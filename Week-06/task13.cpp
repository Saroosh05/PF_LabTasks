
#include<iostream>
using namespace std;

float lowestPrice(string dayPeriod, int km);

main()
{   
    string dayPeriod;
    int km;

    cout << "Enter the number of kilometers: ";
    cin >> km;
    cout << "Enter the period of the day (day/night): ";
    cin >> dayPeriod;



    float result = lowestPrice(dayPeriod, km);
    cout << "Lowest price for " << km << " kilometers: " << result << " EUR";
}

float lowestPrice(string dayPeriod, int km)
{
    float price;
    if(km < 20){
        if(dayPeriod == "day"){
            price = 0.79*km + 0.70;
        }
        else {
            price = 0.90*km + 0.70;
        }
    }   
    if(km >20 && km < 100){
        price = 0.09*km;
    }
    if(km > 100){
        price = 0.06*km;
    }
    return price;
}