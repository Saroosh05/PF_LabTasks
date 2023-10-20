#include<iostream>
#include<string>
using namespace std;

string calculatePrice(int money, int year);

main()
{
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    
    string result = calculatePrice(money, year);
    cout << result;

}

string calculatePrice(int money, int year)
{  
    int evens = 0, odds = 0, age=19, requirement;
    string output;
    for(int i=1800; i<=year; i=i+2 ){
        evens = evens + 12000;
    }
    for(int j=1801; j<=year; j=j+2 ){
        odds = odds + 12000 + 50*age;
        age+=2;
    }

    int total = odds + evens;

    if(total > money){
        requirement = total - money;
        output = "He will need " + to_string(requirement) + " dollars to survive.";
        
    }
    if(total < money){
        requirement = money - total;
         output = "Yes! He will live a carefree life and will have " + to_string(requirement) + " dollars left."; 
    }
    return output;
}