#include <iostream>

using namespace std;
int main ()
{
  int size;
  cout << "Enter the size";
  cin >> size;
  cout << "Enter the elements in an array";
  int a[size], i=0,counteven=0,countodd=0;
  for (i = 0; i < size; i++)
    {
      cin >> a[i];
    }
  
  for (i = 0; i < size; i++)
    {
      if(a[i]%2==0)
      {
      counteven=counteven+1;
    }
    else
    {
        countodd=countodd+1;
    }
}
cout<<"Number of even number is:"<<counteven;
cout<<"Number of odd number is:"<<countodd;

  return 0;
}
