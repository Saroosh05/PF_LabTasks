#include <iostream>
using namespace std;

void evenOdd(int num){
	if( num%2 == 0){
	  cout << "Number " << num << " is even";
	}
	if(!(num%2 == 0)){
	  cout << "Number " << num << " is odd";
	}
	
}

main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	evenOdd(num);
}