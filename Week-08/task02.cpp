#include<iostream>
using namespace std;

float calculateDamage(string, string, float, float);

main(){
    string you, opponent;
    float attack, defense;
    cout << "Enter your type: ";
    cin >> you;
    cout << "Enter your opponent's type: ";
    cin >> opponent;
    cout << "Enter your attack power: ";
    cin >> attack;
    cout << "Enter the opponent's defense: ";
    cin >> defense;

    float result = calculateDamage(you, opponent, attack, defense);
    cout << result;
}

float calculateDamage(string you, string opponent, float attack, float defense)
{
    int damage = 50 * (attack / defense);

    if(you == "fire" && opponent == "grass"){
        damage *= 2;
    }
    else if(you == "grass" && opponent == "fire"){
        damage *= 0.5;
    }
    else if(you == "fire" && opponent == "water"){
        damage *= 0.5;
    }
    else if(you == "water" && opponent == "fire"){
        damage *= 2;
    }
    else if(you == "water" && opponent == "grass"){
        damage *= 0.5;
    }
    else if(you == "grass" && opponent == "water"){
        damage *= 2;
    }
    else if(you == "water" && opponent == "electric"){
        damage *= 0.5;
    }
    else if(you == "electric" && opponent == "water"){
        damage *= 0.5;
    }
    else if(you == opponent){
        damage *= 0.5;
    }
    return damage;
}
