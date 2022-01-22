#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"Enter the value of m";
    cin>>m;
    int a[m],i=0,j=0,flag=0;
    cout<<"Enter the element in an array";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        if(a[i]==a[m-1-i])
        {
            flag=1;
        }
        
    }
    if(flag==1)
    {
        cout<<"Element are same from both side";
    }
    else
    {
        cout<<"Element is not same";
    }
    
    }
    

