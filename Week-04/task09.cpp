#include <iostream>
using namespace std;

void fuel(float distance){
	float need = distance*10;
	if(need >= 100){
	  cout << "Fuel needed: " << need ;
	}
	if(need < 100){
	  cout << "Fuel needed: 100" ;
	}

}

main(){
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	fuel(distance);
}