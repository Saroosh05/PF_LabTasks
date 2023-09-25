#include <iostream>
using namespace std;

void calculator(float num1,float num2,char op){
	if(op == '+'){
	   float result = num1 + num2;
	   cout << "Addition: " << result <<endl;
	}
	if(op == '-'){
	   float result = num1 - num2;
	   cout << "Subtraction: " << result <<endl;
	}	
	if(op == '*'){
	   float result = num1 * num2;
	   cout << "Multiplication: " << result <<endl;
	}	
	if(op == '/'){
	   float result = num1 / num2;
	   cout << "Division: " << result<<endl;
	}	
	
}

main(){
	while(true){
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
}