#include <iostream>
#include <cmath>
using namespace std;

float height(float distance, float angle);

main()
{
    float distance, angle;
    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> distance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;
    float result = height( distance, angle);
    cout <<"The height of the tree is: " << result << " feet";
}

float height(float distance, float angle)
{
    float height = (tan(angle/57.2958))*distance;
    return height;
}

