#include<iostream>
using namespace std;

main(){
	string team;
	int wins;
	int draws;
	int losses;
	cout <<"Enter the name of the cricket team: ";
	cin >> team;
	cout << "Enter the number of wins: ";
	cin >> wins;
	cout << "Enter the number of draws: ";
	cin >> draws;
	cout << "Enter the number of losses: ";
	cin >> losses;
	int points = (wins*3) + draws + (losses*0);
	cout << team << " has obtained " << points << " points in the Asia Cup tournament."; 

}