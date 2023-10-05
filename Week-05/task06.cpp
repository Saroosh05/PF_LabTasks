#include <iostream>
using namespace std;

string checkAlphabetCase(char a);

main()
{
    char a;
    cout << "Enter a character (A/a): ";
    cin >> a;
    
    string ans = checkAlphabetCase(a);
    cout << ans;
    
}

string checkAlphabetCase(char a)
{
    string Aa;
    if( a == 'a'){
        Aa =  "You have entered small a";
    }
    if( a == 'A'){
        Aa =  "You have entered Capital A";
    }
    return Aa;
}

