#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"Enter the value of m ";
    cin>>m;
    int a[m],b[m],c[m],i=0,pos,k=0,l=0;
    cout<<"Enter the element in an array";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements the position to split";
    cin>>pos;
    for(i=0;i<m;i++)
    {
        if(i<pos)
        {
        b[k++]=a[i];
        }
        else 
        {
         c[l++]=a[i];   
        }
    }
    cout<<"Element of first array";
    for(i=0;i<k;i++)
    cout<<b[i];
    cout<<"Elements of second array";
    for(i=0;i<l;i++)
    cout<<c[i];
    
    }
    