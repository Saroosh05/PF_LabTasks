#include <iostream>
using namespace std;

void name(string name){
	cout << name;
}

main(){	
	string name;
	cout << "Enter your name: ";
	cin >> name;

	while(true){
	  cout << name <<endl;
	}
}