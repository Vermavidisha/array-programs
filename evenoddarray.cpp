#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    int a[size],b[size],c[size],i=0,e=0 ,o=0;
    cout<<"Enter the elementsin an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            b[e]=a[i];
            e++;
        }
        else
        {
            c[o]=a[i];
            o++;
        }
    }
    cout<<"Even elements are";
    for(i=0;i<e;i++)
    {
        cout<<b[i];
    }
    cout<<"Odd elements are";
    for(i=0;i<o;i++)
    {
        cout<<c[i];
    }
    return 0;
}