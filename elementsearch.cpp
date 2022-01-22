#include <iostream>

using namespace std;
int main ()
{
  int size;
  cout << "Enter the size";
  cin >> size;
  cout << "Enter the elements in an array";
  int a[size], i=0,search,count=0;
  for (i = 0; i < size; i++)
    {
      cin >> a[i];
    }
    cout<<"Enter the search element";
    cin>>search;
  
  for (i = 0; i < size; i++)
    {
      if(a[i]==search)
      {
      count=count+1;
      break;
      }
}
if(count==1)
{
    cout<<"Search element exist";
}
else
{
    cout<<"Search element not exist";
}


  return 0;
}
