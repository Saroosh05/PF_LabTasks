#include <iostream>
using namespace std;

void add();

main(){
	add();
	add();
}

void add(){
	int num1,num2,sum;
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	sum = num1+num2;
	cout << "Sum: " << sum <<endl;
	
}