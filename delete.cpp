#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number";
    cin>>size;
    int a[size],pos,i=0;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position of deleted element";
    cin>>pos;
    for(i=pos;i<size-1;i++)
    {
    a[i]=a[i+1];
    }
    cout<<"Updated array";
    for(i=0;i<size-1;i++)
    {
    cout<<a[i];
    }
    return 0;
}