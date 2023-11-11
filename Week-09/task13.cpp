#include <iostream>
#include <string>
using namespace std;

void jazzifyChords(string chords[], int numChords);

main()
{
    int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;

    string chords[numChords];
    cout << "Enter " << numChords << " chords, one per line: " << endl;
    for (int x = 0; x < numChords; x++)
    {
        cin >> chords[x];
    }

    jazzifyChords(chords, numChords);
}

void jazzifyChords(string chords[], int numChords)
{
    cout << "Jazzified chords: [";
    int index = 0;
    while (chords[0][index] != '\0')
    {
        index++;
    }

    if (chords[0][index - 1] != '7')
    {
        chords[0] = chords[0] + "7";
    }
    cout << chords[0];

    for (int x = 1; x < numChords; x++)
    {
        int index = 0;
        while (chords[x][index] != '\0')
        {
            index++;
        }

        if (chords[x][index - 1] != '7')
        {
            chords[x] = chords[x] + "7";
        }
        cout << ", " << chords[x];
    }
    cout << "]";
}