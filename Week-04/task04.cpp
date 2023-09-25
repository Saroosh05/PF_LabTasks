#include <iostream>
using namespace std;

void calculator(float num1,float num2,char op){
	if(op == '+'){
	   float result = num1 + num2;
	   cout << "Addition: " << result;
	}
	if(op == '-'){
	   float result = num1 - num2;
	   cout << "Subtraction: " << result;
	}	
	if(op == '*'){
	   float result = num1 * num2;
	   cout << "Multiplication: " << result;
	}	
	if(op == '/'){
	   float result = num1 / num2;
	   cout << "Division: " << result;
	}	
	
}

main(){
	float num1, num2;
	char op;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;

	calculator(num1,num2,op);
}