#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"Enter the value of m ";
    cin>>m;
    int a[m],i;
    cout<<"Enter the element in an array";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<m;i++)
    {
        if(a[i]<0)
        {
          cout<<a[i];  
        }
    }
}   
