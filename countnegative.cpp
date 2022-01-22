#include <iostream>

using namespace std;
main ()
{
  int size;
  cout << "Enter the size";
  cin >> size;
  cout << "Enter the elements in an array";
  int a[size], i = 0, count=0;
  for (i = 0; i < size; i++)
    {
      cin >> a[i];
    }
  
  for (i = 0; i < size; i++)
    {
      if(a[i]<0)
      count=count+1;
    }
    cout<<"Number of negative elements"<<count;

  return 0;
}
