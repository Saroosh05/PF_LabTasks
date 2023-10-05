#include <iostream>
using namespace std;

int pool(int V, int P1, int P2, float H);
int pipe1(int V, int P1, int P2, float H);
int pipe2(int V, int P1, int P2, float H);

main()
{
    int V,P1,P2;
    float H;
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;
    
    int poolfull = pool(V,P1,P2,H);
    int contributeP1 = pipe1(V,P1,P2,H);
    int contributeP2 = pipe2(V,P1,P2,H);

    if(poolfull <= 100){
        cout << "The pool is " << poolfull << "% full. ";
        cout << "Pipe 1: " << contributeP1 << "%. ";
        cout << "Pipe 2: " << contributeP2 << "%.";
    }
    if(poolfull > 100){
        int overflow = (P1 + P2)*H - V;
        cout << "For " << H << " hours, the pool overflows with " << overflow << " liters.";
    }
}

int pool(int V, int P1, int P2, float H)
{
    int poolfull = (((P1 + P2)*H)/V)*100;
    return poolfull;
}
int pipe1(int V, int P1, int P2, float H)
{
    int poolfull = ((P1 + P2)*H);
    int contributeP1 = ((P1*H)/poolfull)*100;
    return contributeP1;
}
int pipe2(int V, int P1, int P2, float H)
{
    int poolfull = ((P1 + P2)*H);
    int contributeP2 = ((P2*H)/poolfull)*100;
    return contributeP2;
}

