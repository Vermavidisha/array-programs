
#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number";
    cin>>size;
    int a[size],j=0,i=0;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Print unique number";
    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
           if(a[i]==a[j])
              break;
        }
        if(i==j)
        {
        cout<<a[i];
        }
    }
    
    return 0;
}