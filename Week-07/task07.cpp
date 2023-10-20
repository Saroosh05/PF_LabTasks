#include<iostream>
#include <iomanip>
using namespace std;

void percentageValues(float count);

main()
{
    float count;
    cout << "Enter numbers count: ";
    cin >> count;

    percentageValues(count);
}

void percentageValues(float count)
{
    int numP1 = 0, numP2 = 0, numP3 = 0, numP4 = 0, numP5 = 0;
    float p1, p2, p3, p4, p5;

    for(int i = 0; i < count; i++){
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if(number < 200){
            numP1++;
        } else if(number > 200 && number <= 399){
            numP2++;
        } else if(number > 399 && number <= 599){
            numP3++;
        } else if(number > 599 && number <= 799){
            numP4++;
        } else if(number > 799 ){
            numP5++;
        }  
    }

    p1 = (numP1/count)*100;
    p2 = (numP2/count)*100;
    p3 = (numP3/count)*100;
    p4 = (numP4/count)*100;
    p5 = (numP5/count)*100;

    cout << fixed << setprecision(2)<< p1 << "%" <<endl;
    cout << fixed << setprecision(2)<< p2 << "%" <<endl;
    cout << fixed << setprecision(2)<< p3 << "%" <<endl;
    cout << fixed << setprecision(2)<< p4 << "%" <<endl;
    cout << fixed << setprecision(2)<< p5 << "%" <<endl;
}