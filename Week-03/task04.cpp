#include<iostream>
using namespace std;

main(){
	float charge;
	float time;
	cout << "Enter the charge (Q) in Coulombs: ";
	cin >> charge;
	cout << "Enter the time (t) in seconds: "; 
	cin >> time;
        float current = charge/time;
	cout << "The current (I) is: " << current << " Amperes";

}