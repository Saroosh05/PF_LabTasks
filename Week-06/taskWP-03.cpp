#include<iostream>
using namespace std;

string canBuyDress(float dresscost, string brand);

main()
{   
    float dresscost; 
    string brand;

    cout << "Enter the dress cost: $";
    cin >> dresscost;
    cout << "Enter the dress brand: ";
    cin >> brand;

    string result = canBuyDress(dresscost, brand);
    cout << result;

}

string canBuyDress(float dresscost, string brand)
{
   if(dresscost > 1500.0 ){
    if(brand == "MTJ"){
        return "Congralutaions! You can buy the dress.";
    }
   }
   return "Sorry, the dress doesn't meet the criteria for purchase.";
}