#include<iostream>
using namespace std;

main()
{
    char choice ;

    while(choice != 'N' && choice != 'n'){
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "I am happy !" << endl;
    }
}