#include <iostream>
using namespace std;

string timeTravel(int hr, int min);

main()
{
    int hr,min;
    cout << "Enter Hours: ";
    cin >> hr;
    cout << "Enter Minutes: ";
    cin >> min;
    
    string result =  timeTravel( hr,min);
    cout << result;
}

string timeTravel(int hr, int min)
{
    int totalMin = (hr*60) + min + 15;
    int timeHr = totalMin/60;
    int timeMin = totalMin%60;
    string time = to_string(timeHr) + ":" + to_string(timeMin);  
    return time;
}

