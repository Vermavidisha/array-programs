#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number";
    cin>>size;
    int a[size],i=0,max,min;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
        else if(a[i]<min)
        {
        min=a[i];
        }
    }
    cout<<"Maximum element"<<max;
    cout<<"Minimun element"<<min;

    return 0;
}