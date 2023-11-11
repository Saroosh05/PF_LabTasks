#include <iostream>
#include <string>
using namespace std;

double calculateTotalResistance(double resistance[], int size);

main()
{
    int n = 0;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;

    double resistance;
    if (n > 0)
    {
        double resistances[n];
        cout << "Enter the resistance values (in ohms) of the " << n << " resistors, one per line: " << endl;
        for (int x = 0; x < n; x++)
        {
            cin >> resistances[x];
        }
        resistance = calculateTotalResistance(resistances, n);
        cout << "The total resistance of the series circuit is " << resistance << " ohms.";
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

double calculateTotalResistance(double resistance[], int size)
{
    double sum = 0;
    for (int x = 0; x < size; x++)
    {
        sum += resistance[x];
    }
    return sum;
}