
#include<iostream>
#include<Windows.h>
using namespace std;

string calculateCost(float budget, string category, int numPeople);

main()
{   
    float budget;
    string category;
    int numPeople;

    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> numPeople;



    string result = calculateCost(budget, category, numPeople);
    cout <<  result ;
}

string calculateCost(float budget, string category, int numPeople)
{
    float cost;
    string output;
    if( category == "VIP"){
        if(numPeople <= 4 ){
            cost = (numPeople*499.99) + (0.75*budget);
        }
        if(numPeople > 4 && numPeople <=9 ){
            cost = (numPeople*499.99) + (0.6*budget);
        }
        if(numPeople >9 && numPeople <= 24 ){
            cost = (numPeople*499.99) + (0.5*budget);
        }
        if(numPeople > 24 && numPeople <= 49 ){
            cost = (numPeople*499.99) + (0.4*budget);
        }
        if(numPeople > 49 ){
            cost = (numPeople*499.99) + (0.25*budget);
        }
    }
    else {
        if(numPeople <= 4 ){
            cost = (numPeople*249.99) + (0.75*budget);
        }
        if(numPeople > 4 && numPeople <=9 ){
            cost = (numPeople*249.99) + (0.60*budget);
        }
        if(numPeople >9 && numPeople <= 24 ){
            cost = (numPeople*249.99) + (0.50*budget);
        }
        if(numPeople > 24 && numPeople <= 49 ){
            cost = (numPeople*249.99) + (0.40*budget);
        }
        if(numPeople > 49 ){
            cost = (numPeople*249.99) + (0.25*budget);
        }
    }

    if(cost > budget){
        output = "Not enough money! You need " + to_string(cost-budget) + " leva.";
    }
    else {
        output = "Yes! You have " + to_string(budget-cost) + " leva left.";
    }

  return output;
}