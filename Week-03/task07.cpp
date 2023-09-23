#include<iostream>
using namespace std;

main(){
	int hrs;
	cout << "Enter the number of hours: ";
	cin >> hrs;
	int sec = hrs*60*60;
	cout << hrs << " hours is equivalent to " << sec << " seconds.";  
}