#include<iostream>
using namespace std;

void counting();

main()
{
    counting();
}

void counting()
{
    cout << "Counting (1-10)" << endl;
    for(int x = 1; x<=10 ; x++){
       cout << x << endl;
    }
}