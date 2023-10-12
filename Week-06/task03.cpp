#include<iostream>
using namespace std;

float perimeter(char shape, float value);

main()
{
    char shape;
    float value;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> value;

    float result = perimeter(shape, value);
    cout << "The perimeter is: " << result;
}

float perimeter(char shape, float value)
{
    float peri_value;
    if(shape == 's'){
        peri_value = 4*value;
    }
    if(shape == 't'){
        peri_value = 3*value;
    }
    if(shape == 'c'){
        peri_value = 6.28*value;
    }
    if(shape == 'h'){
        peri_value = 6*value;
    }
    return peri_value;
}