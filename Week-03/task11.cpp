#include<iostream>
using namespace std;

main(){
	int pop;
	int m_rate;
	cout << "Enter the current world population: ";
	cin >> pop;
	cout << "Enter the monthly birth rate (number of births per month): ";
	cin >> m_rate;
	int result = (m_rate*(30*12))+pop;
	cout << "The population in three decades will be: " << result; 
}