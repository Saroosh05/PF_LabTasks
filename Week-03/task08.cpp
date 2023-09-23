#include<iostream>
using namespace std;

main(){
	float volt;
	float current;
	cout << "Enter voltage (in volts): ";
	cin >> volt;
	cout << "Enter current (in amperes): ";
	cin >> current;
	float power = volt*current;
	cout << "The power is " << power << " watts.";

}