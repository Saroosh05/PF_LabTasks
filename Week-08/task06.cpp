#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;

int pileCubes(long long);

main(){
    long long volume;
    cout << "Enter the volume of the building: ";
    cin >> volume;
    
    int result = pileCubes(volume);
    cout << result;
}

int pileCubes(long long volume) 
{  
    
    long long cubes = 1;
    long long vol = 0;
    long long value ;
    while(vol < volume){ 
        value = cubes*cubes*cubes;      
        vol += value; 
        cubes ++;
    }
    if( vol == volume){
        return cubes-1;
    }
    else {
        return -1;
    }
}