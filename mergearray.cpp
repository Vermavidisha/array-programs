#include <iostream>

using namespace std;
int main ()
{
  int a[10],b[10],c[20], i=0;
  cout<<"Elements of first array";
  for (i = 0; i < 10; i++)
    {
      cin >> a[i];
    }
  cout<<"Elements of second array";
  for (i = 0; i < 10; i++)
  {
  cin>>b[i];
  }
  cout<<"Array after merging";
  for(i=0;i<10;i++)
  {
      c[i]=a[i];
      c[i+10]=b[i];
  }
  for(i=0;i<20;i++)
  {
      cout<<c[i];
  }

  return 0;
}
