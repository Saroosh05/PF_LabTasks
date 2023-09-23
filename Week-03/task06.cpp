#include<iostream>
using namespace std;

main(){
	float mb;
	cout << "Enter the size in megabytes (MB): ";
	cin >> mb;
	float bit = mb*1024*1024*8;
	cout << mb << " MB is equivalent to " << bit << " bits.";
}