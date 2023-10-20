#include <iostream>
#include <string>
#include<cmath>
using namespace std;

string calculateMoney(int age, int w_price, int t_price);

main()
{
    int age, w_price, t_price;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> w_price;
    cout << "Enter the unit price of each toy: ";
    cin >> t_price;

    string result = calculateMoney(age, w_price, t_price);
    cout << result;
}

string calculateMoney(int age, int w_price, int t_price)
{
    float evenBD = 0, oddBD = 0, x = 10;
    int money;
    string output;
    for (int i = 2; i <= age; i = i + 2)
    {
        evenBD = evenBD + (x - 1);
        x = x + 10;
    }
    for (int j = 1; j < age; j = j + 2)
    {
        oddBD = oddBD + t_price;
    }
    
    int saving = evenBD + oddBD;

    if (saving > w_price)
    {
        money = saving - w_price;
        output = "Yes!\n" + to_string(money);
    }
    else if (saving < w_price)
    {
        money = w_price - saving;
        output = "No!\n" + to_string(money);
    }
    return output;
}