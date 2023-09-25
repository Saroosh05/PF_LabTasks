#include <iostream>
using namespace std;

void discount( string day, float purchase){
	if( day == "Sunday"){
	   float payable = purchase-(0.1*purchase);
	   cout << "Payable Amount: $" << payable <<endl;
	}
	if(!(day == "Sunday")){
	   float payable = purchase-(0.5*purchase);
	   cout << "Payable Amount: $" << payable<<endl;
	}
	
}

main(){
	while(true){
	string day;
	float purchase;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: $";
	cin >> purchase;

	discount(day,purchase);
	}
}