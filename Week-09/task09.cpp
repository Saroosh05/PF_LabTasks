#include <iostream>
#include <string>
using namespace std;

bool canPayWithChange(double change[], double totalDue);

main()
{
  double change[4];
  cout << "Enter quarters: ";
  cin >> change[1];
  cout << "Enter dimes: ";
  cin >> change[2];
  cout << "Enter nickels: ";
  cin >> change[3];
  cout << "Enter pennies: ";
  cin >> change[4];

  double totalDue;
  cout << "Enter the total amount due: $";
  cin >> totalDue;

  bool result = canPayWithChange(change, totalDue);
  string ans;
  if (result == 1)
  {
    ans = "Yes";
  }
  else
  {
    ans = "No";
  }
  cout << "Can you pay the amount? " << ans;
}

bool canPayWithChange(double change[], double totalDue)
{
  double inPocket = change[1] * 0.25 + change[2] * 0.10 + change[3] * 0.05 + change[4] * 0.01;
  if (inPocket >= totalDue)
  {
    return true;
  }
  else
  {
    return false;
  }
}