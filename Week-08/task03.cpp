#include<iostream>
using namespace std;

string plant(string, int, int, int);

main(){
    string type;
    int water, fert, temp;
    cout << "Enter the type of flower: ";
    cin >> type;
    cout << "Enter the units of water: ";
    cin >> water;
    cout << "Enter the units of fertilizer: ";
    cin >> fert;
    cout << "Enter the temperature: ";
    cin >> temp;

    string result = plant(type, water, fert, temp);
    cout << result;
}

string plant(string type, int water, int fert, int temp)
{
    string garden = "";
    if( temp >= 20 && temp <= 30){
        for(int segment = 1; segment <= water; segment++){
            for(int stem = 1; stem <= water; stem++){
                garden +=  "-";
            }
            for(int flower = 1; flower <= fert; flower++){
                garden += type;
            }
            
        }
    }
    else {
        for(int segment = 1; segment <= water; segment++){
            for(int stem = 1; stem <= water; stem++){
                garden +=  "-";
            }
        }
        garden += type;
    }
    return garden;
}
