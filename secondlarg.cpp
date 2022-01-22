#include <iostream>

using namespace std;

int
main ()
{
  int size;
  cout << "Enter the size";
  cin >> size;
  cout << "Enter the elements in an array";
  int a[size], i = 0, larg, slarg;
  for (i = 0; i < size; i++)
    {
      cin >> a[i];
    }
  larg = a[0];
  slarg = a[0];
  for (i = 0; i < size; i++)
    {
      if (a[i] > larg)
	{
	  slarg = larg;
	  larg = a[i];
	}
      else if (a[i] > slarg && a[i] < larg)
	{
	  slarg = a[i];

	}
    }
  cout << "Second largest element in an array" << slarg;

  return 0;
}
