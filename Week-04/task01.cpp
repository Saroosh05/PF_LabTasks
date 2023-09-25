#include <iostream>
using namespace std;

void fuel(float distance){
	float need = distance*10;
	cout << "Fuel needed: " << need ;
}

main(){
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	fuel(distance);
}