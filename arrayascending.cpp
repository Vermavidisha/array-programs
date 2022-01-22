#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    int a[size],i=0,j=0,temp=0;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }  
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Array in ascending order";
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }

    return 0;
}