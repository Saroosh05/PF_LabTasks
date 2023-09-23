#include<iostream>
using namespace std;

main(){
	string name;
	float matric_marks;
	float inter_marks;
	float ECAT_marks;
	
	cout << "Enter the student's name: ";
	cin >> name;
	cout << "Enter matriculation marks (out of 1100): ";
	cin >> matric_marks;
	cout << "Enter intermediate marks (out of 550): ";
	cin >> inter_marks;
	cout << "Enter Ecat marks (out of 400): ";
	cin >> ECAT_marks;

	float merit = (((ECAT_marks/400)*0.5) + ((inter_marks/550)*0.4) + ((matric_marks/1100)*0.1))*100;
	cout << "Aggregate score for " << name << " in UET is: " << merit << "%";
}