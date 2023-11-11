#include <iostream>
using namespace std;

main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    int sum = 0;
    for (int x = 0; x < 5; x++)
    {
        sum += numbers[x];
    }
    float average = sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average;
}