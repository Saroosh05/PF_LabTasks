#include <iostream>
#include <cmath>
using namespace std;

void roots(float a, float b, float c);

main()
{
    float a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    
    roots( a, b, c);
    
}

void roots(float a, float b, float c)
{
    float determinant = (b*b) - (4*a*c);
    if(determinant > 0){
        float root1 = (-b + (sqrt(determinant)))/(2*a);
        float root2 = (-b - (sqrt(determinant)))/(2*a);
        cout << "Solutions: x = " << root1 << " and x = " << root2 ;
    }
    if(determinant == 0 ){
        float root = -b /(2*a);
        cout << "Solution: x = " << root ;
    }
    if(determinant < 0 ){
        float part1 = (-b /(2*a));
        float part2 = ((sqrt(-(determinant)))/(2*a));
        cout << "Complex Solutions: x = " << part1 << " + " << part2 << "i and x = " << part1 << " - " << part2 << "i";
    }
}

