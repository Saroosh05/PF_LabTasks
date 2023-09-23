#include<iostream>
using namespace std;

main(){
	float width;
	float length;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;

	float area = length*width;
	cout << "The area of the rectangle is: " << area ;
}