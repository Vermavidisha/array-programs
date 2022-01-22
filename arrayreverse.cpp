#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the element in array";
    cin>>size;
    int arr1[size],arr2[size],i;
    for(i=0;i<size-1-1;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<size;i++)
    {
        arr2[i]=arr1[size-i-1];
    }
    cout<<"Element of reverse array";
    for(i=0;i<size-1;i++)
    {
        cout<<arr2[i];
    }
}