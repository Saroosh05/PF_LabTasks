#include<iostream>
using namespace std;

bool doesBrickFit(float, float, float, float, float);

main(){
    float width, height, depth, h_width, h_height;
    cout << "Enter the width of brick: ";
    cin >> width;
    cout << "Enter the height of brick: ";
    cin >> height;
    cout << "Enter the depth of brick: ";
    cin >> depth;
    cout << "Enter the width of hole: ";
    cin >> h_width;
    cout << "Enter the height of hole: ";
    cin >> h_height;

    bool result = doesBrickFit(width, height, depth, h_width, h_height);
    cout << result;
}

bool doesBrickFit(float width, float height, float depth, float h_width, float h_height)
{
    if((width == h_width && height == h_height) || (height == h_width && width == h_height) || (width == h_width && depth == h_height) || (depth == h_width && width == h_height) || (height == h_width && depth == h_height) || (depth == h_width && height == h_height)){
        return true;
    }
    else {
        return false;
    }
}
