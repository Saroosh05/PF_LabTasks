#include<iostream>
using namespace std;

string speedInfo(float speed);

main()
{   
    float speed;

    cout << "Enter the speed: ";
    cin >> speed;

    string result = speedInfo(speed);
    cout << result;
}

string speedInfo(float speed)
{
    string status;

    if ( speed > 10){
        if(speed <= 50){
            status = "average";
        }
        if(speed > 50 && speed <= 150){
            status = "fast";
        }
        if(speed > 150 && speed <= 1000){
            status = "ultra-fast";
        }
        if(speed > 1000){
            status = "extremely fast";
        }
    }
    else {
        status = "slow";
    }
    return status;
}