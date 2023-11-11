#include <iostream>
#include <string>
using namespace std;

bool isSpecialArray(int arr[], int size);

main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int array[size];
  cout << "Enter " << size << " elements of the array: " << endl;
  for (int x = 0; x < size; x++)
  {
    cin >> array[x];
  }

  bool result = isSpecialArray(array, size);
  string answer;
  if (result == 1)
  {
    answer = "The array is special";
  }
  else
  {
    answer = "The array is not special";
  }
  cout << answer;
}

bool isSpecialArray(int arr[], int size)
{
  int y = 0;
  for (int x = 0; x <= size; x++)
  {
    if (!((arr[x] % 2 == 0 && x % 2 == 0) || (arr[x] % 2 != 0 && x % 2 != 0)))
    {
      y++;
    }
  }
  if (y == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}