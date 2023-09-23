#include<iostream>
using namespace std;

main(){
	float lbs;
	cout << "Enter weight in pounds: ";
	cin >> lbs;
	float kgs = lbs*0.45;
	cout << lbs << " pounds is equal to " << kgs << " kilograms." ; 
}