#include <iostream>
using namespace std;

void result(int score){
	if( score > 50){
	  cout << "Pass";
	}
	if(!( score > 50)){
	  cout << "Fail";
	}
	
}

main(){
	int score;
	cout << "Enter your score: ";
	cin >> score;
	result(score);
}