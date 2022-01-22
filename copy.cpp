#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number";
    cin>>size;
    int a[size],b[size],i=0;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<b[i];
    }
    return 0;
}