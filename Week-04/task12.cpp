#include <iostream>
using namespace std;

void yname(string name){
	 cout << name <<endl;
}

main(){	
	string name;
	cout << "Enter your name: ";
	cin >> name;

	while(true){
	 if(name == "Kaka"){
	  while(true){
	   yname(name);
	  }
	 }
	 if(!(name == "Kaka")){
	  cout << "Enter your name: ";
	  cin >> name;	 
	 }

	}
}