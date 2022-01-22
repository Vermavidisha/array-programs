#include<iostream>
using namespace std;
int main()
{
    int arr[10],i=0,search;
    cout<<"Enter the elements in an array";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search element";
    cin>>search;
    for(i=0;i<10;i++)
    {
    if(search==arr[i])
    {
        cout<<"Search element is present";
        break;
    }
    else
    {
        cout<<"Search element is not present";
    }
    }
}