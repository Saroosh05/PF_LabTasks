#include <iostream>
using namespace std;

void feet(float inches){
	float infeet = inches/12;
	cout << "Equivalent in feet: " << infeet ;
}

main(){
	float inches;
	cout << "Enter the measurement in inches: ";
	cin >> inches;
	feet(inches);
}